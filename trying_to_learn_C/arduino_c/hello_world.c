#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void) {
    // Set pin 13 on the RedBoard as output
    DDRB |= (1 << DDB5);

    while (1) {
        // Toggle the state of pin 13
        PORTB ^= (1 << PORTB5);
        _delay_ms(1000); // Delay for 1 second
    }

    return 0;
}
