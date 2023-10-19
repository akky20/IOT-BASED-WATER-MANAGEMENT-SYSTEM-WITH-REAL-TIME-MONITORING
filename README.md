# IoT-Based Water Management System with Real-Time Monitoring

## Project Description

In this project, we have created an IoT-driven water management system that utilizes water sensors connected to an Arduino IDE. These sensors continuously transmit data to a web server through Node.js libraries, providing real-time water level updates. The web interface displays water levels using a color code (green for sufficient and red for insufficient) for quick assessment. The system not only monitors but also takes action by automatically transferring water from a central tank to pots with low water levels, ensuring optimal plant hydration.

## Components

- **Arduino IDE**: The Arduino board with connected water level sensors and relays for controlling water flow.
- **Node.js Server**: A Node.js server that receives data from the Arduino and broadcasts it to the web interface.
- **Web Interface**: A web application that displays real-time water level data and uses a color code to represent the status of each pot.

## Installation

1. Clone this repository to your local machine.
2. Ensure you have Node.js and npm (Node Package Manager) installed on your system.
3. Install the required Node.js packages by running `npm install` in the project directory.
4. Upload the provided Arduino code to your Arduino board.
5. Connect your Arduino to the sensors and relays as specified in the code.

## Usage

1. Start the Node.js server by running `node app.js` in the project directory.
2. Open the web interface by navigating to `http://localhost:3000` in your web browser.

## Arduino Code

The Arduino code provided in the project reads data from the water level sensors and sends the data to the Node.js server. It also controls the relays to manage water flow based on the sensor readings. The code includes comments for better understanding.

## Web Interface

The web interface is a user-friendly dashboard that displays the water levels of different pots. It updates in real-time, and the color-coding (green for sufficient and red for insufficient) allows users to quickly assess the status of each pot.

Thank you for your interest in our IoT-Based Water Management System!
