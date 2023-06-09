#include <stdio.h>

struct bitfield {
    unsigned a : 19;
    unsigned b : 11;
    unsigned c : 4;
    unsigned d : 29;
    char index; // 13然后对齐到16
};

int main(int argc, const char* argv[])
{
    printf("Size of bitfield: %d\n", sizeof(struct bitfield)); // 16

    return 0;
}