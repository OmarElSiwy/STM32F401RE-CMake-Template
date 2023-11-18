FROM archlinux:latest

# Download all packages
RUN pacman -Syu --noconfirm \
    && pacman -S --noconfirm \
      base-devel \
      git \
      arm-none-eabi-gcc \
      arm-none-eabi-newlib \
      stlink \
      unzip \
      python

# Makes Directory and goes into it
RUN mkdir -p /Workspace
WORKDIR /Workspace

# Check that all packages installed properly
RUN mkdir -p /Workspace/Test
COPY Test/DockerTest.py /Workspace/Test
RUN python /Workspace/Test/DockerTest.py

# Set command terminal as bash
CMD ["bash"]

# GCC Compiler for AARCH: PACMAN
# STM32 Firmware Files: ZIP FIle
# STLINK: https://archlinux.org/packages/extra/x86_64/stlink/
