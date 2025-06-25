# AQMS
Air Quality Monitoring System

# 🌍 AQMS: Air Quality Monitoring System

![WhatsApp Image 2025-06-25 at 3 26 37 PM](https://github.com/user-attachments/assets/0b1f7509-bdda-455c-a5e9-569a00d2de95)
 <!-- Replace with your actual image file -->
## 📌 Overview

**AQMS** is a low-cost, portable, IoT-based Air Quality Monitoring System that leverages the **ESP32 microcontroller** and a suite of environmental sensors to detect air pollutants in real time. It calculates the **Air Quality Index (AQI)** and uploads data to **ThingSpeak Cloud** every 15 seconds. The system also features a live **OLED display** and a compact **custom-designed PCB** for seamless integration.
## 🎯 Features

- ✅ Real-time monitoring of PM2.5, CO, NO₂, TVOCs, Temperature & Humidity
- 📶 Wi-Fi enabled data transmission to ThingSpeak
- 📟 OLED display for on-device monitoring
- 🔋 Powered by a rechargeable 3.7V Li-Po battery
- 📊 Dynamic AQI calculation and category display
- 🧠 Compact and modular PCB design using KiCad
## 🧱 Tech Stack / Hardware Used

| Category              | Components / Tools                                   |
|----------------------|------------------------------------------------------|
| 🧠 Microcontroller    | ESP32 (dual-core, built-in Wi-Fi)                    |
| 🌫️ PM2.5 Sensor       | Winsen ZPH02                                         |
| ⚠️ CO Sensor          | MQ-7                                                |
| 🧪 NO₂ Sensor         | DFRobot MEMS                                         |
| 🧴 TVOC Sensor        | Winsen ZP07-MP503                                    |
| 🌡️ Temp/Humidity      | DHT22 (AM2302)                                       |
| 💻 Display            | 0.96" OLED                                           |
| 🔋 Power              | Li-Po 3.7V Battery + MT3608 Boost Converter         |
| 🛠️ PCB Design Tool    | KiCad                                                |
| ☁️ Cloud Platform     | ThingSpeak                                           |
| 🧰 IDE                | Arduino IDE                                          |
## 🚀 Getting Started

### 🔧 Prerequisites

Make sure you have:

- Arduino IDE installed
- ESP32 board manager added
- Required libraries installed:
Adafruit_SSD1306  
Adafruit_GFX  
DHT sensor library  
MQ7  
ThingSpeak  

---

### 📲 Steps to Run

1. Clone this repository:
git clone https://github.com/Shivampunia/AQMS-Air-Quality-Monitoring-System.git
cd AQMS-Air-Quality-Monitoring-System
2. Open the .ino file from the code/ directory using Arduino IDE.

3. Upload the code to the ESP32 board.

4. Power the setup using a Li-Po battery or USB cable.

---

## 📸 Project Gallery

| View        | Image                                 |
|-------------|----------------------------------------|



| Front View  | ![](![WhatsApp Image 2025-06-25 at 3 26 37 PM](https://github.com/user-attachments/assets/bebe23e6-71a9-4e11-be28-7e3b044c0930)
)             |
| Back View   | ![](![WhatsApp Image 2025-06-25 at 3 26 38 PM](https://github.com/user-attachments/assets/c48af846-fdea-4b4c-851b-f4d3773a039f)
)              |
| PCB Layout  | ![](![Screenshot 2025-06-25 161154](https://github.com/user-attachments/assets/7347e775-a755-4eec-b577-11e33b4acf48)

)             |
| Schematic   | ![](![Screenshot 2025-06-25 162458](https://github.com/user-attachments/assets/460dbff1-d09d-496c-bf3d-fa7bc3538d5a)

)              |
| 3D Preview  | ![](![image](https://github.com/user-attachments/assets/01ba273b-7902-4d96-9812-8553479f7a00)

)                   |
## ☁️ ThingSpeak Dashboard

(![Screenshot 2025-06-25 161401](https://github.com/user-attachments/assets/61220e7c-916b-4f34-a8e9-f05d5bb6ce1f)

)

> 🔗 [ThingSpeak Live Channel](https://thingspeak.com/channels/your_channel_id)
## 🖥️ PCB Files

All design and manufacturing files are in the `PCB/` folder:

- ✅ `AQMS.kicad_pcb` — PCB layout  
- ✅ `AQMS.sch` — Schematic  
- ✅ `Gerber_Files.zip` — Ready to upload to PCB fab site  
- ✅ `3D_View.png` — Rendered preview  
## 📘 Documentation

- 📄 `AQMS-Project-Report.pdf` — Includes complete background, component selection, schematic, code breakdown, and testing results. Available in the `documentation/` folder.
