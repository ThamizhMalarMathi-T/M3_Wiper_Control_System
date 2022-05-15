
# ABSTRACT

Windshield wiper is a mechanical arrangement that aids in the clearing of the windshield in assisting the driver to see clearly. It clears various substances ranging from solids like dust, leaves and other light weight residues and fluids like water and other substances. It functions by sensing the fluid or dust on the windshield and operated with the help of motor. The project is built using STM32F407 devlopment board.

## FUNCTIONALITY

    1. Ignition key position at ACC:
        The Red LED is ON if the user button is pressed and held for 2 seconds
    2. Wiper ON: 
        Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz

    3. Wiper OFF: 
        Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2

    4. Ignition Key Position at Lock: 
        The Red LED is OFF, if the user button is pressed and held for 2 secs
