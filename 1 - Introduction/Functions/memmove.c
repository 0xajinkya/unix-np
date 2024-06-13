#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Hello, World!";

    memmove(str, str + 7, 5);
    
    str[5] = '\0';

    printf("Result after memmove: %s\n", str);

    return 0;
}