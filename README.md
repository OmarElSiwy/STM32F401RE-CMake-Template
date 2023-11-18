# STM32F401RE Development Environment

This repository contains a Docker setup for developing applications for STM32F4 series microcontrollers on Arch Linux. It provides a consistent and isolated development environment with all the necessary tools pre-installed.

## Prerequisites

- Docker
- Git (for cloning this repository)

## Installation

1. **Clone the Repository**
   
   ```bash
   git clone https://github.com/OmarElSiwy/STM32F401RE/tree/Template
   cd STM32F401RE
   ```

2. **Build the Docker Image**

Run the following command to build the Docker image:

   ```bash
   docker build -t stm32-dev-env .
   ```

3. **Run the Docker Container**

After building the image, start a container:

   ```bash
   docker run -it stm32-dev-env
   ```
