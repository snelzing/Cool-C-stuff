# Define the programmer you are using
PROGRAMMER = arduino
# Define the port your RedBoard is connected to
PORT = /dev/ttyUSB0
# Define the microcontroller you are using
MCU = atmega328p
# Define the baud rate for uploading
BAUDRATE = 115200

# Define the name of your program
TARGET = hello_world

# Define the source files
SRC = $(TARGET).c

# Define the compiler
CC = avr-gcc
# Define the object file
OBJ = $(SRC:.c=.o)
# Define the avr-gcc flags
CFLAGS = -g -Wall -Os -mmcu=$(MCU)

# Define the avrdude command
AVRDUDE = avrdude -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUDRATE)

# Define the rules
all: $(TARGET).hex

$(TARGET).hex: $(TARGET).elf
	avr-objcopy -O ihex -R .eeprom $< $@

$(TARGET).elf: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

upload: $(TARGET).hex
	$(AVRDUDE) -U flash:w:$<

clean:
	rm -f $(TARGET).hex $(TARGET).elf $(OBJ)

.PHONY: all clean upload
