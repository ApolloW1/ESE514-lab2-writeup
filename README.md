# ESE514-lab2-writeup
## 3.2: Response to Questions
1. Why is bit-banging impractical on your laptop, despite it having a much faster processor than the RP2040?

    Unlike a general purpose processor, PIO state machines are highly specialised for IO, with a focus on determinism, precise timing, and close integration with fixed-function hardware.

2. What are some cases where directly using the GPIO might be a better choice than using the PIO hardware?

    LEDs and push buttons.

3. How do you get data into a PIO state machine?

   The data is transmitted from FIFO to a PIO state machine. PULL instruction loads a 32-bit word from the TX FIFO into the OSR.

4. How do you get data out of a PIO state machine?

    OUT instruction shift bit count bits out of the Output Shift Register (OSR), and write those bits to Destination. Additionally, increase the output shift count by Bit count, saturating at 32.

5. How do you program a PIO state machine?

    The date should be loaded to TX FIFO and then transmitted to the state machine to program a PIO state machine.

6. In the example, which low-level C SDK function is directly responsible for telling the PIO to set the LED to a new color? How is this function accessed from the main “application” code?

    pio_sm_put_blocking( )

    This commands writes a word of data to a state machine's TX FIFO, blocking if the FIFO is full. The function is realized by including the header file.

7. What role does the pioasm “assembler” play in the example, and how does this interact with CMake?

    It convert pioasm file to bytes for low level hardware to control the PIO. Instruction pico_generate_pio_header() in CMake file invokes the assembler.

## 3.3: Photos or scans of your annotated code printouts.
https://github.com/ApolloW1/ESE514-lab2-writeup/blob/main/ws2812.c.pdf

https://github.com/ApolloW1/ESE514-lab2-writeup/blob/main/ws2812.pio.h.pdf

## 3.4: Your spreadsheet of initial PIO register states

Sheet 1:
[https://github.com/ApolloW1/ESE514-lab2-writeup/blob/main/spreadsheet.xlsx](https://github.com/ApolloW1/ESE514-lab2-writeup/blob/main/Complete%20Spreadsheet.xlsx)
## 3.5: A photo or scan of your paper model

![IMG_530938FF33DC-1](https://user-images.githubusercontent.com/114015725/196051142-607c1e6f-e3ce-4ddc-8d76-44df9e28644e.jpeg)

## 3.6: Your complete packet transmission spreadsheet

Sheet 2:
https://github.com/ApolloW1/ESE514-lab2-writeup/blob/main/Complete%20Spreadsheet.xlsx

## 3.7: Your polished timing diagram
https://github.com/ApolloW1/ESE514-lab2-writeup/blob/main/Timing%20Diagram.pdf

## Reflect:
What were some strengths/weaknesses of working with paper?

Strength: Easy to see the trend

Weakness: It takes time to draw the diagram

What were some strengths/weaknesses of working with spreadsheets?

Strength: Data is clearly shown

Weakness: It takes time to make the sheets

How might you approach this task using other tools available to you?

By using the voltmeter.

## 4: Code Folder
https://github.com/ApolloW1/ESE514-lab2-writeup/tree/main/code%20folder
