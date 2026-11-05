# 🦾 6DOF Robotic Arm / Brazo Robótico 6DOF

🌐 **Select Language / Selecciona el idioma:** [🇬🇧 English](#english-version) | [🇪🇸 Español](#versión-en-español)

---

## English Version

### 🗺️ Project Roadmap
- [x] **Step 1:** Pre-assembly servo calibration (90° centering tool).
- [x] **Step 2:** Mechanical assembly of the 6DOF aluminum chassis.
- [ ] **Step 3:** Multi-servo hardware integration & smooth motion control with ESP32 (*S-curve* / *Teach & Play*).
- [ ] **Step 4:** Forward & Inverse Kinematics (Denavit-Hartenberg parameters).
- [ ] **Step 5:** Digital Twin & ROS 2 integration (URDF, RViz, MoveIt 2).
- [ ] **Step 6:** Computer Vision & Autonomous *Pick & Place* (Python + OpenCV).
- [ ] **Step 7:** Closed-loop feedback modification (current/position sensing).

### 🛠️ Hardware
* **Structure:** 6DOF aluminum mechanical robotic arm kit with gripper.
* **Actuators:** 6x Standard 180° Servomotors (MG996R).
* **Main Controller:** ESP32.
* **Calibration Tool:** Arduino Nano + KY-023 Joystick Module.
* **Power Supply:** External 5V power supply (minimum 10A recommended under full load).

---

### ✅ Step 1: Pre-assembly Servo Calibration
Before screwing on the metal servo horns, each servomotor is electronically centered at 90° to guarantee a symmetrical range of motion and prevent mechanical collisions or motor burnout.

#### Calibrator Wiring (Arduino Nano)
* **Common GND:** External power supply GND + Arduino Nano GND + Joystick GND connected together.
* **Servomotor:** VCC (Red) to external 5V/6V supply, GND (Brown/Black) to common GND, Signal (Orange) to pin `D9`.
* **Joystick:** +5V to Nano `5V` pin *(Important: power strictly at 5V so the ADC reading range is not altered)*, VRx to pin `A0`, SW (button) to pin `D7`.
* **Arduino IDE Note:** Select `Tools > Processor: "ATmega328P (Old Bootloader)"` if upload fails with `not in sync: resp=0x50`.

👉 Source code: [`tools/calibrador_joystick_nano/`](./tools/calibrador_joystick_nano/).  
👉 Read full calibration guide: [`docs/calibration_90_degrees.md`](./docs/calibration_90_degrees.md).

---

### 🔧 Step 2: Mechanical Assembly 
* **Base, Shoulder, Elbow, and Wrist:** Fastened while the servo is locked at 90° in its neutral/square alignment.
* **Gripper (Claw):** Adjusted considering the open/close physical limits.

#### Video References Used
* [ASSEMBLY OF 6DOF ROBOTIC ARM KIT - Side Hustler](http://www.youtube.com/watch?v=RFV52JuI7ug)
* [Servo Positioning Using Arduino and Joystick Module - ELEXHUB](http://www.youtube.com/watch?v=aWv0LkL4MLE)

---

## Versión en Español

### 🗺️ Hoja de Ruta del Proyecto (Roadmap)
- [x] **Paso 1:** Calibración de servomotores previa al montaje (herramienta de centrado a 90°).
- [ ] **Paso 2:** Ensamblaje mecánico del chasis de aluminio 6DOF.
- [ ] **Paso 3:** Integración con ESP32 y control suave de trayectorias (perfiles de velocidad / *Teach & Play*).
- [ ] **Paso 4:** Cinemática Directa e Inversa (parámetros Denavit-Hartenberg).
- [ ] **Paso 5:** Gemelo Digital e integración con ROS 2 (URDF, RViz, MoveIt 2).
- [ ] **Paso 6:** Visión Artificial y *Pick & Place* autónomo (Python + OpenCV).
- [ ] **Paso 7:** Modificación a lazo cerrado (lectura de posición real / sensores de corriente).

### 🛠️ Hardware
* **Estructura:** Kit mecánico de aluminio 6DOF con pinza (garra).
* **Actuadores:** 6x Servomotores estándar de 180° (MG996R).
* **Controlador Principal:** ESP32.
* **Herramienta de Calibración:** Arduino Nano + Módulo Joystick KY-023.
* **Alimentación:** Fuente externa de 5V (mínimo 10A recomendados a carga completa).

---

### ✅ Paso 1: Calibración previa al montaje
Antes de atornillar los soportes metálicos (horns), cada servomotor se centra electrónicamente a 90° para garantizar un recorrido simétrico y evitar colisiones mecánicas o que el motor se queme.

#### Conexiones del Calibrador (Arduino Nano)
* **GND Común:** Tierra de la fuente externa + GND del Arduino Nano + GND del Joystick unidos entre sí.
* **Servomotor:** VCC (Rojo) a fuente externa de 5V, GND (Marrón/Negro) a tierra común, Señal (Naranja) al pin `D9`.
* **Joystick:** +5V al pin `5V` del Nano *(Importante: alimentar estrictamente a 5V para no desplazar las lecturas analógicas del ADC)*, VRx al pin `A0`, SW (botón) al pin `D7`.
* **Nota en Arduino IDE:** Seleccionar `Tools > Processor: "ATmega328P (Old Bootloader)"` si aparece el error de subida `not in sync: resp=0x50`.

👉 Código fuente: [`tools/calibrador_joystick_nano/`](./tools/calibrador_joystick_nano/).  
👉 Leer guía completa de calibración: [`docs/calibration_90_degrees.md`](./docs/calibration_90_degrees.md).

---

### 🔧 Paso 2: Ensamblaje Mecánico
* **Base, Hombro, Codo y Muñeca:** Fijados con el servo bloqueado a 90° en su posición neutral o en escuadra.
* **Pinza (Garra):** Ajustada teniendo en cuenta los topes físicos de apertura y cierre.

#### Referencias en Vídeo Utilizadas
* [ASSEMBLY OF 6DOF ROBOTIC ARM KIT - Side Hustler](http://www.youtube.com/watch?v=RFV52JuI7ug)
* [Servo Positioning Using Arduino and Joystick Module - ELEXHUB](http://www.youtube.com/watch?v=aWv0LkL4MLE)
