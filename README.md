# simHit - Simulador Open Source para el Aprendizaje Activo del Impulso Cefálico

simHit es un proyecto de simulador open source destinado a revolucionar la educación en otorrinolaringología, proporcionando una herramienta eficaz para el entrenamiento en la realización del impulso cefálico. Este simulador busca mejorar la precisión y eficacia en la enseñanza y práctica de esta técnica crucial para el diagnóstico y tratamiento de trastornos del equilibrio.

## Características Principales

- **Feedback inmediato**: Permite a los estudiantes hacer ajustes en tiempo real, mejorando el aprendizaje y la precisión de la técnica.
- **Accesibilidad**: Como herramienta open source y de bajo coste, simHit es accesible para instituciones educativas de todo nivel.
- **Fácil de usar**: Interfaz intuitiva diseñada para facilitar el aprendizaje y la práctica del impulso cefálico.
- **Experiencia similar**:El equipo entrega una experiencia de uso simil a la de un equipo VHIT convencional.

## Tecnología Utilizada

- Electrónica controlada por Arduino para simular movimientos cefálicos.
- Software desarrollado en Python 3.x con PySide6 para la interfaz gráfica
- ESP8266
- IMU bno055
  ***
## Partes del equipo
Consta de dos unidades principales: En primer lugar, los sensores, los cuales  pueden ser múltiples y cada uno funciona como una unidad independiente, mientras que el receptor se conecta directamente al computador. Ambos componentes se comunican entre sí mediante Wi-Fi y un protocolo TCP. El módulo de cada unidad corresponde a un ESP8266. En el caso de los sensores, están conectados a un IMU bno055. La información recogida por los sensores es transmitida al receptor, que a su vez envía los datos a un programa de diseño en Python para su procesamiento.
![Diagrama de flujo(2)](https://github.com/grarmando/simHit/assets/163556012/8d4ab033-2eae-4ee6-925a-9c8e3f6d9708)
  ![WhatsApp Image 2024-05-22 at 12 03 12](https://github.com/grarmando/simHit/assets/163556012/127ceb29-98ec-4d2c-a2f0-1f2393daa1e1)
En esta imagen podemos observar los componentes que conforman el SIMHIT fundamentales para la placa
***
- Puerto Micro USB
- Condensadores Electrolíticos
- Cables de Conexión
- Circuitos Integrados (IC)    	
- Regulador de Voltaje    	
- Resistencias    	
- Capacitores Cerámicos    
- Conector de Pines
- Interruptor (Switch)

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
