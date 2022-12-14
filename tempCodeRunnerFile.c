#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t dx = 0x4C8;
    while (dx) {
        putchar(0x69644520 >> (((dx >>= 3) & 7) << 3) & 0xFF);
    }
    dx = 0x8AA788;
    while (dx) {
        putchar(0x75726B62614D0A >> (((dx >>= 3) & 7) << 3) & 0xFF);
    }
}