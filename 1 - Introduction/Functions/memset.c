#include<stdio.h>
#include<string.h>

int main() {
    char buffer[50];

    memset(buffer, 'A', sizeof(buffer) -1);
    buffer[49] = "\0";

    printf("Buffer filled with 'A': %s\n", buffer);

    memset(buffer, 0, sizeof(buffer));
    printf("Buffer after zeroing out: %s\n", buffer);
    return 0;
}