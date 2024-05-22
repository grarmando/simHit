 # simHit - Simulador Open Source para el Aprendizaje Activo del Impulso Cefálico

simHit es un proyecto de simulador open source destinado a facilitar la enseñanza de técnicas vinculadas a la otorrinolaringología como lo son el impulso cefalico y las maniobras de provocación,liberación y reposición de otolitos que necesitan de precisión del evaluador para ser efectivas y de mucha práctica, práctica que es dificil obtener fuera de una consulta o centro médico, debido al alto costo que poseen los equipos clinicos y que no estan enfocados al aprendizaje si no más bien al diagnóstico. 

## Características Principales

- **Feedback inmediato**: Permite a los estudiantes hacer ajustes en tiempo real, mejorando el aprendizaje y la precisión de la técnica.
- **Accesibilidad**: Como herramienta open source y de bajo coste, simHit es accesible para instituciones educativas de todo nivel.
- **Fácil de usar**: Interfaz intuitiva diseñada para facilitar el aprendizaje y la práctica del impulso cefálico.
- **Experiencia similar**:El equipo entrega una experiencia de uso simil a la de un equipo VHIT convencional por un precio mucho menor.

## Tecnología Utilizada

El hardware del equipo consta de un conector usb el cual pasa por un convertidor de usb a serial ch340g el cual debe tener como requisito no constar de cristales, para este caso puntual los cristales deben estar insertos, lo cual encarece un poco el sistema, luego a un puerto serial que transmite la información en 115200 esto es integrago por el controlador que es el ESP8266 para comunicarse al IMU bno055 se utiliza el protocolo I2C.Hací es posible obtener la información del sensor integrada en los planos yaw, pitch y roll que es imprimida cada 10ms. Cabe mencionar que el sensor bno055 se encuentra descontinuado pero es posible utilizar el MPU950 lo importante es que posea 9 ejes.
 
- ![Block Diagram Template](https://github.com/grarmando/simHit/assets/163556012/77ea4546-1553-48b5-bfa7-8c5567481f89)

  ***
## Partes del equipo
- **conector usb**
- **convertidor CH340g**
![Sin título](https://github.com/grarmando/simHit/assets/163556012/93d834d4-ab14-4ae6-ab53-34dbf1eb2f59)
- **puerto serial**
- **controlador ESP8266**
![ESP8266_Pinout_12-E-1024](https://github.com/grarmando/simHit/assets/163556012/ab98a727-0e53-42d3-90ec-4460c224da61)
- **conexión I2C**
![WhatsApp Image 2024-03-27 at 13 08 45](https://github.com/grarmando/simHit/assets/163556012/09ba0b41-f713-4d69-9106-693a59fda4ca)
- **sensor IMU**
![2472-12](https://github.com/grarmando/simHit/assets/163556012/cc03b35f-94cd-4f4c-a8bf-9ed36edc80af)

  




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
- BOM: acá encontraras los suministros que debes adquirir: a parte de la tecnología utilizada es necesario disponer de una montura para poder ensamblar con el SIMHIT en este caso se tomo la desición de utilizar unas gafas, para dar más similitud al VHIT, se requiere de una impresora 3d para crear la caja que almacene dicho sistema, tambien una pantalla oled que se conecte al microcontrolador mediante  I2C es necesaria para poder hacer una retroalimentación más gráfica.



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
