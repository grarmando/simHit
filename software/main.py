import sys
from PySide6.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QWidget
import pyqtgraph as pg
from pyqtgraph.Qt import QtCore
import serial
import threading

class SerialReader(QtCore.QObject):
    data_ready = QtCore.Signal(float)

    def __init__(self, port, baudrate=115200):
        super().__init__()
        self.serial = serial.Serial(port, baudrate)
        self.running = True
        self.thread = threading.Thread(target=self.read_data)
        self.thread.start()

    def read_data(self):
        while self.running:
            if self.serial.in_waiting > 0:
                line = self.serial.readline().decode('utf-8').strip()
                try:
                    value = float(line)
                    self.data_ready.emit(value)
                except ValueError:
                    pass

    def stop(self):
        self.running = False
        self.thread.join()
        self.serial.close()

class MainWindow(QMainWindow):
    def __init__(self, port):
        super().__init__()
        self.setWindowTitle('Serial Data Plotter')

        self.graph_widget = pg.PlotWidget()
        self.setCentralWidget(self.graph_widget)

        self.data = []

        self.serial_reader = SerialReader(port)
        self.serial_reader.data_ready.connect(self.update_plot)

    def update_plot(self, value):
        self.data.append(value)
        if len(self.data) > 100:  # limit the number of data points displayed
            self.data.pop(0)
        self.graph_widget.plot(self.data, clear=True)

    def closeEvent(self, event):
        self.serial_reader.stop()
        event.accept()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    port = 'COM3'  # Cambia esto al puerto serial correspondiente
    window = MainWindow(port)
    window.show()
    sys.exit(app.exec())
