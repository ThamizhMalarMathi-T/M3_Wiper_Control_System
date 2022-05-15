# INTRODUCTION

Windshield wiper is a mechanical arrangement that aids in the clearing of the windshield in assisting the driver to see clearly. It clears various substances ranging from solids like dust, leaves and other light weight residues and fluids like water and other substances. It functions by sensing the fluid or dust on the windshield and operated with the help of motor. The project is built using STM32F407 devlopment board.

# AIM & OBJECTIVE

    - To maintain the visibility of the vehicle windshield for the user.
    - Simlified functionality to operate in various speeds.
    
# FEATURES

    1. Ignition key position at ACC:
        The Red LED is ON if the user button is pressed and held for 2 seconds
    2. Wiper ON: 
        Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz

    3. Wiper OFF: 
        Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2

    4. Ignition Key Position at Lock: 
        The Red LED is OFF, if the user button is pressed and held for 2 secs
        
# HARDWARE REQUIREMENTS

   * STM32F407VG Microcontroller Development Board

# SOFTWARE REQUIREMENT

   * STM32 CUBE IDE
   * QEMO
   * Visual Studio Code

## HARDWARE DESCRIPTION

   * STM32F407VG Microcontroller
      
      The STM32F405xx and STM32F407xx family is based on the high-performance Arm® Cortex®-M4 32-bit RISC core operating at a frequency of up to 168 MHz. The Cortex-M4 core features a Floating point unit (FPU) single precision which supports all Arm single-precision data-processing instructions and data types. It also implements a full set of DSP instructions and a memory protection unit (MPU) which enhances application security. The STM32F405xx and STM32F407xx family incorporates high-speed embedded memories (Flash memory up to 1 Mbyte, up to 192 Kbytes of SRAM), up to 4 Kbytes of backup SRAM, and an extensive range of enhanced I/Os and peripherals connected to two APB buses, three AHB buses and a 32-bit multi-AHB bus matrix.
All devices offer three 12-bit ADCs, two DACs, a low-power RTC, twelve general-purpose 16-bit timers including two PWM timers for motor control, two general-purpose 32-bit timers. a true random number generator (RNG). They also feature standard and advanced communication interfaces.

   * FEATURES
        
       - Up to 1 Mbyte of Flash memory
       - Up to 192+4 Kbytes of SRAM including 64-Kbyte of CCM (core coupled memory) data RAM
       - 512 bytes of OTP memory
       - Flexible static memory controller supporting Compact Flash, SRAM, PSRAM, NOR and NAND memories
       - LCD parallel interface, 8080/6800 modes
       - Clock, reset and supply management
       - 1.8 V to 3.6 V application supply and I/Os
       - POR, PDR, PVD and BOR
       - 4-to-26 MHz crystal oscillator
       - Internal 16 MHz factory-trimmed RC (1% accuracy)
       - 32 kHz oscillator for RTC with calibration
       - Internal 32 kHz RC with calibration

# WORKING

When ignition key position at ACC the Red LED is ON if the user button is pressed and held for 2 seconds. For Wiper ON, On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz. For Wiper OFF, the LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2. For ignition Key Position at Lock, the Red LED is OFF, if the user button is pressed and held for 2 secs.

# 4 W's and 1 H

## WHAT

   - This functionality is a mechanical device operated by a motor controller to clean the windshield of an automobile to enhance visibility of the driver.

## WHEN
    
   - The wiper clears snow, rain and dust during rainy, windy and misty days to aid in better driving.

## WHERE

   - This device is used to clean the windshield of a vehicle in all kinds of weather conditions.

## WHY

   - It provides a clean and high degree of visibility to the user regardless of weather conditions.

## HOW

   - The motion of the windshield wiper arm is effected and controlled by a motor and the speed of the wiper depends on the frequency input provided by the controller.

## High Level Requirements

| ID | Description | Category |  
| ----- | ----- | ------- | 
| HLR01 | Locking the door | Technical | 
| HLR02 | Unlocking the door | Technical |
| HLR03 | Triggering wiper system | Technical | 
| HLR04 | Turning the wiper OFF| Technical |

## Low level requirements

| ID | Description | Category |  
| ----- | ----- | ------- | 
| LLR01 | The Red LED is ON if the user button is pressed and held for 2 seconds| HLR01 | 
| LLR02 | Press of the user input, Blue, Green and Orange LEDs come ON | HLR02 |
| LLR03 | The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz | HLR03 | 
| LLR04 | The LED glow pattern stops on the 4th press; the wiper action starts next press onwards | HLR04 |
