 # simHit - Simulador Open Source para el Aprendizaje Activo del Impulso Cefálico

simHit es un proyecto de simulador open source destinado a facilitar la enseñanza de técnicas vinculadas a la otorrinolaringología como lo son el impulso cefalico y las maniobras de provocación,liberación y reposición de otolitos que necesitan de precisión del evaluador para ser efectivas y de mucha práctica, práctica que es dificil obtener fuera de una consulta o centro médico, debido al alto costo que poseen los equipos clinicos y que no estan enfocados al aprendizaje si no más bien al diagnóstico. 

## Características Principales

- **Feedback inmediato**: Permite a los estudiantes hacer ajustes en tiempo real, mejorando el aprendizaje y la precisión de la técnica.
- **Accesibilidad**: Como herramienta open source y de bajo coste, simHit es accesible para instituciones educativas de todo nivel.
- **Fácil de usar**: Interfaz intuitiva diseñada para facilitar el aprendizaje y la práctica del impulso cefálico.
- **Experiencia similar**:El equipo entrega una experiencia de uso simil a la de un equipo VHIT convencional por un precio mucho menor.

***
## Apartado educaativo

El aprendizaje en la educación médica suele ceñirse a la piramide de miller que se centra en la adquisición del conocimiento o el saber, seguido del saber como que se suele demuestrar a traves de casos clinicos y luego está el demostrar que es donde toma relevancia este proyecto SIMHIT enfocado en crear simulaciones lo más acercadas al ultimo eslavón de la pirámide que es el hacer y que habitualmente es muy alejada de las experiencias en simulaciones debido al poco acceso a equipos clinicos en aulas educativas y la poca objetividad de algunas técnicas.

## Tecnología Utilizada

El hardware del equipo consta de un conector usb el cual pasa por un convertidor de usb a serial ch340g , luego a un puerto serial que transmite la información en 115200 esto es integrado por el microcontrolador que es el ESP8266 para comunicarse mediante el protocolo I2C con el IMU 9DOF, .Hací es posible obtener la información del sensor integrada en los planos yaw, pitch y roll que es imprimida cada 10ms. Cabe mencionar que el sensor 9DOF se encuentra descontinuado pero es posible utilizar el  BNO055, BNO080, MPU9250, BMP085, lo importante es que posea 9 ejes.
![Block Diagram Template(3)](https://github.com/grarmando/simHit/assets/163556012/36f10f96-244a-4498-96f0-a60ff2b0fa72)





  ***
## Partes del equipo
- **conector usb**
- **convertidor CH340g**
- ![Sin título](https://github.com/grarmando/simHit/assets/163556012/4b2f4bce-e92a-4a6b-a658-4a4ef70f2661)


- **puerto serial**
- **microcontrolador ESP8266**
- ![ESP8266_Pinout_12-E-1024](https://github.com/grarmando/simHit/assets/163556012/89c5a2a2-0fc7-42c6-9651-f76b07c95213)
- **conexión I2C**
- ![WhatsApp Image 2024-03-27 at 13 08 45](https://github.com/grarmando/simHit/assets/163556012/ee20c2c7-bb9d-4bf2-9f42-6480c185cc7c)

- **sensor IMU**
- ![2472-12](https://github.com/grarmando/simHit/assets/163556012/7faa55fc-8fe2-4ff8-978b-bbf3a5db4e96)


## interfaz

Esta interfaz consta de dos módulos, uno relacionado al funcionamiento de el equipo que manipulara el estudiante, el cual entrega retroalimentación de carácter sonoro y visual del  proceso ejecutado, mientras que el segundo módulo está asociado a la aplicación integrada, la cual contempla gráficas y valores objetivos de los movimientos registrados por el equipo. Ambos modelos convergen en el mismo propósito: proporcionar una retroalimentación inmediata. Estas características permiten objetivar, acelerar y unificar el aprendizaje de estas técnicas.

## Requisitos

Para utilizar simHit, necesitas:

- Python 3.x
- PySide6
- Arduino IDE (para realizar la carga del firmware, también puedes usar esptools)
- Hardware compatible especificado en los diagramas de montaje

## Instalación

Clona este repositorio utilizando:

```
git clone https://github.com/tu_usuario/simHit.git
pip install PySide6
pip install opencv-python
python main.py
```



## Estructura del Proyecto

- Electrónica: Acá encontraras los esquematicos en Kicad para el diseño y construcción de la placa 
- 3d model: acá encontraras los modelos 3d
- Firmware: Acá encontraras el firmware en Arduino para ESP8266
- Software: Aca encontrarás el software en para el PC
- BOM: a parte de la tecnología utilizada es necesario disponer de una montura para poder ensamblar con el SIMHIT en este caso se tomo la desición de utilizar unas gafas que posean una sujeción segura y firme en la cabeza,así para poder dar más similitud al VHIT, se requiere de una impresora 3d para crear la caja que almacene dicho sistema, tambien una pantalla oled que se conecte al microcontrolador mediante  I2C es necesaria para poder hacer una retroalimentación más gráfica.



## Contribuir

simHit es un proyecto open source y alentamos la participación de la comunidad. Si estás interesado en contribuir, por favor:

- Fork el repositorio.
- Crea una nueva rama.
- Haz tus cambios y commit.
- Push a la rama.
- Crea una nueva Pull Request.
- Estamos ansisosos por ver tus propuestas.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT - para más detalles consulta el archivo LICENSE.md.
Contacto

Para más información sobre simHit, puedes contactar a david.avila@uach.cl
