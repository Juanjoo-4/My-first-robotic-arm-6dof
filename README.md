# 🦾 6DOF Robotic Arm / Brazo Robótico 6DOF

🌐 **Select Language / Selecciona el idioma:** [🇬🇧 English](#english-version) | [🇪🇸 Español](#versión-en-español)

---

## English Version

Documentation, wiring diagrams, and source code for assembling, calibrating, and controlling an aluminum 6 Degrees of Freedom (6DOF) mechanical robotic arm.

### 🛠️ Hardware Used
* **Structure:** 6DOF aluminum mechanical robotic arm kit with gripper.
* **Actuators:** 6x Standard 180° Servomotors (MG996R or similar).
* **Main Controller:** ESP32.
* **Calibration Tool:** Arduino Nano + KY-023 Joystick Module.
* **Power Supply:** External 5V/6V power supply (minimum 10A recommended under full load).

### ⚙️ Phase 1: Pre-assembly Calibration (Servo Positioner)
Before screwing on the metal servo horns, each servomotor must be electronically centered at 90° to ensure a symmetrical range of motion and prevent mechanical collisions or motor burnout.

#### Calibrator Wiring (Arduino Nano)
* **Common GND:** External power supply GND + Arduino Nano GND + Joystick GND connected together.
* **Servomotor:** VCC (Red) to external 5V/6V supply, GND (Brown/Black) to common GND, Signal (Orange) to pin `D9`.
* **Joystick:** +5V to Nano `5V` pin *(Important: power strictly at 5V so the analog reading range is not altered)*, VRx to pin `A0`, SW (button) to pin `D7`.
* **Arduino IDE Note:** Select `Tools > Processor: "ATmega328P (Old Bootloader)"` if the upload fails with `not in sync: resp=0x50`.

👉 The calibration code is located in [`tools/calibrador_joystick_nano/`](./tools/calibrador_joystick_nano/).

### 🔧 Phase 2: Mechanical Assembly
* **Base, Shoulder, Elbow, and Wrist:** Fastened while the servo is locked at 90° in its neutral/square alignment.
* **Gripper (Claw):** Adjusted considering the open/close physical limits.

#### Video References
* [ASSEMBLY OF 6DOF ROBOTIC ARM KIT - Side Hustler](http://www.youtube.com/watch?v=RFV52JuI7ug)
* [6DOF Robotic Arm Assembly Tutorial - ELEXHUB](http://www.youtube.com/watch?v=bKY8MJDq3p0)
* [How To Build 6 DOF Robot Arm Kit - SciTyeTech](http://www.youtube.com/watch?v=bkyzbqoIi18)
* [Servo Positioning Using Arduino and Joystick Module - ELEXHUB](http://www.youtube.com/watch?v=aWv0LkL4MLE)

### 🚀 Phase 3: ESP32 Control (Work in Progress)
*Coming soon: Multi-servo wiring schematic and wireless control firmware.*

---

## Versión en Español

Documentación, esquemas de conexión y código fuente para el ensamblaje, calibración y control de un brazo robótico mecánico de aluminio de 6 grados de libertad (6DOF).

### 🛠️ Hardware Utilizado
* **Estructura:** Kit mecánico de aluminio 6DOF con pinza (garra).
* **Actuadores:** 6x Servomotores estándar de 180° (MG996R o similares).
* **Controlador Principal:** ESP32.
* **Herramienta de Calibración:** Arduino Nano + Módulo Joystick KY-023.
* **Alimentación:** Fuente externa de 5V/6V (mínimo 10A recomendados a carga completa).

### ⚙️ Fase 1: Calibración previa al montaje (Servo Positioner)
Antes de atornillar los soportes metálicos (horns), cada servomotor se centra electrónicamente a 90° para garantizar un recorrido simétrico y evitar colisiones mecánicas o que el motor se queme.

#### Conexiones del Calibrador (Arduino Nano)
* **GND Común:** Tierra de la fuente externa + GND del Arduino Nano + GND del Joystick unidos entre sí.
* **Servomotor:** VCC (Rojo) a fuente externa de 5V/6V, GND (Marrón/Negro) a tierra común, Señal (Naranja) al pin `D9`.
* **Joystick:** +5V al pin `5V` del Nano *(Importante: alimentar estrictamente a 5V para no desplazar las lecturas analógicas del ADC)*, VRx al pin `A0`, SW (botón) al pin `D7`.
* **Nota en Arduino IDE:** Seleccionar `Tools > Processor: "ATmega328P (Old Bootloader)"` si aparece el error de subida `not in sync: resp=0x50`.

👉 El código de esta herramienta se encuentra en [`tools/calibrador_joystick_nano/`](./tools/calibrador_joystick_nano/).

### 🔧 Fase 2: Ensamblaje Mecánico
* **Base, Hombro, Codo y Muñeca:** Fijados con el servo bloqueado a 90° en su posición neutral o en escuadra.
* **Pinza (Garra):** Ajustada teniendo en cuenta los topes físicos de apertura y cierre.

#### Referencias en Vídeo
* [ASSEMBLY OF 6DOF ROBOTIC ARM KIT - Side Hustler](http://www.youtube.com/watch?v=RFV52JuI7ug)
* [6DOF Robotic Arm Assembly Tutorial - ELEXHUB](http://www.youtube.com/watch?v=bKY8MJDq3p0)
* [How To Build 6 DOF Robot Arm Kit - SciTyeTech](http://www.youtube.com/watch?v=bkyzbqoIi18)
* [Servo Positioning Using Arduino and Joystick Module - ELEXHUB](http://www.youtube.com/watch?v=aWv0LkL4MLE)

### 🚀 Fase 3: Control con ESP32 (En progreso)
*Próximamente: Esquema de conexiones multipin y firmware de control inalámbrico.*
