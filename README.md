# STM32F401RE Development Environment

This repository contains a Docker setup for developing applications for STM32F4 series microcontrollers on Arch Linux. It provides a consistent and isolated development environment with all the necessary tools pre-installed.

## Prerequisites

- Docker
- Git 

## Installation

1. **Clone the Repository**
   
   ```bash
   git clone https://github.com/OmarElSiwy/STM32F401RE/tree/Template
   cd STM32F401RE
   ```

2. **Build the Docker Image**

   ```bash
   docker build -t stm32-dev-env .
   ```

3. **Run the Docker Container**

   ```bash
   docker run -it stm32-dev-env
   ```

4. **Build Project**

   ```bash
   make
   ```

6. **Flash STM32**

   ```bash
   make burn
   ```
