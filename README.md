# simHit - Simulador Open Source para el Aprendizaje Activo del Impulso Cefálico

simHit es un proyecto de simulador open source destinado a revolucionar la educación en otorrinolaringología, proporcionando una herramienta eficaz para el entrenamiento en la realización del impulso cefálico. Este simulador busca mejorar la precisión y eficacia en la enseñanza y práctica de esta técnica crucial para el diagnóstico y tratamiento de trastornos del equilibrio.

## Características Principales

- **Feedback inmediato**: Permite a los estudiantes hacer ajustes en tiempo real, mejorando el aprendizaje y la precisión de la técnica.
- **Accesibilidad**: Como herramienta open source y de bajo coste, simHit es accesible para instituciones educativas de todo nivel.
- **Fácil de usar**: Interfaz intuitiva diseñada para facilitar el aprendizaje y la práctica del impulso cefálico.

## Tecnología Utilizada

- Electrónica controlada por Arduino para simular movimientos cefálicos.
- Software desarrollado en Python 3.x con PySide6 para la interfaz gráfica
  ***
## Partes del equipo
  
  ![Diagrama de flujo(2)](https://github.com/grarmando/simHit/assets/163556012/8d4ab033-2eae-4ee6-925a-9c8e3f6d9708)
  
  ![2472-12](https://github.com/grarmando/simHit/assets/163556012/af7f4946-43f8-4cdb-88b7-9b7d2e243838) 
  sensor
![ESP8266_Pinout_12-E-1024](https://github.com/grarmando/simHit/assets/163556012/5fd8b787-6d6b-4442-b967-312faedc3fe6) 
minicontrolador


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
- BOM: acá encontraras los suministros que debes adquirir



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
