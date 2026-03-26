# 🎮 Smart Arcade Machine 
![Status](https://img.shields.io/badge/status-complete-brightgreen) ![Language](https://img.shields.io/badge/language-Python-blue) ![Arduino](https://img.shields.io/badge/arduino-used-orange)

> Custom-built arcade machine for public spaces, integrating hardware, game emulation, and real-time monitoring.

---

## 🚀 Features
- 🕹️ Arcade system running MAME  
- 🌐 Real-time remote monitoring  
- 💰 Coin insertion tracking  
- 📊 System metrics: CPU, RAM, temperature, uptime  
- 🖥️ Web interface for visualization  
- 🎛️ Custom physical controls via Arduino  
- 🔘 Special buttons for system commands (power off, change game)  

---

## 🧠 Learning Outcomes
- **Embedded systems integration**: Arduino + Raspberry Pi  
- **Hardware-software communication** via USB  
- **Backend development**: Flask  
- **Real-time monitoring interface design**  
- **Physical system adaptation** for public spaces  

---

## 🛠️ Technologies
- Raspberry Pi 🖥️  
- Arduino Micro ⚡  
- Python 🐍  
- Flask 🌐  
- HTML / CSS / JS 💻  
- USB communication 🔌  

---

## 🔌 Hardware Components
- Raspberry Pi  
- Arduino Micro  
- Monitor  
- Speakers  
- Arcade buttons and joysticks  
- Coin sorter / validator  
- Power supply  
- Custom wooden arcade cabinet  

---
## 📈 System Architecture
<details>

<summary>(Click to expand)</summary>

```text
[Buttons & Coin Sorter] 
        ↓
      Arduino Micro (Interrupts & USB HID)
        ↓
      Raspberry Pi (MAME + Python scripts)
        ↓
      Flask Server
        ↓
      Frontend Dashboard (HTML/CSS/JS)
```
</details>

---

## 🔄 Data Flow
Coin Inserted → Arduino Micro → Interrupt → Signal → Raspberry Pi
Button Pressed → Arduino Micro → USB (Keyboard Input) → Game
System Start → Python Script → Flask Server → Web Dashboard

---

## 📊 Collected Metrics
Metric	Description
Coins inserted	Number of coins processed
Last coin timestamp	Time of last coin insertion
Machine temperature	Degrees Celsius
System uptime	Hours powered on
CPU usage	% of processor used
RAM usage	% of memory used

---

## 📂 Project Structure

```text
.
├── arduino/            # Arduino code (buttons, coin sorter, interrupts)
├── backend_flask/      # Flask server (API, metrics handling)
├── frontend/           # Web interface (HTML, CSS, JavaScript)
├── raspberry_scripts/  # Python scripts (startup + data reporting)
└── docs/               # Images, diagrams, and documentation
```

---

## ▶️ Usage
Power on the arcade machine 🔌
Insert coin to activate gameplay 💰
Use physical controls to play 🕹️
Access the web dashboard for real-time metrics 🌐

---

## 🔮 Future Improvements
- 💳 Digital payment integration
- 📊 Historical data analysis dashboard
- 🔔 Real-time notifications
- 🌡️ Thermal system optimization

---


## 👤 Author
Daniel León Meléndez | Engineering Student at UPIITA

---