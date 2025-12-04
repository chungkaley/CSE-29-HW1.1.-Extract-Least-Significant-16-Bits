#include <stdio.h>
#include <stdint.h>

// Given a uint32_t, returns the least significant (rightmost) 16 bits as a uint16_t
// For example:
//   0xFFFFFFFF -> 0xFFFF (65535)
//   0x00000000 -> 0x0000 (0)
//   0x00010001 -> 0x0001 (1)
//   0x80008000 -> 0x8000 (32768)
//   0xDEADBEEF -> 0xBEEF (48879)
uint16_t second_half(uint32_t number) {
    // TODO: Implement this function
   // return 0;
   return (uint16_t) (number & 0b00000000000000001111111111111111);
}

int main() {
    char line[20];  // Large enough for uint32_t max value (4294967295) plus newline
    
    // Read lines until EOF
    while (fgets(line, sizeof(line), stdin) != NULL) {
        uint32_t number;
        if (sscanf(line, "%u", &number) == 1) {
            // Convert number and print result
            printf("%u\n", second_half(number));
        }
    }
    
    return 0;
}
