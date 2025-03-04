#include <avr/io.h>

int main(void) {
    DDRB |= (1 << PB5);  // Sätt PB5 som utgång (Arduino Uno: LED på pin 13)
    while (1) {
        PORTB ^= (1 << PB5);  // Växla LED på/av
        for (volatile long i = 0; i < 100000; i++); // En enkel fördröjning
    }
    return 0;
}
