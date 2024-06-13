#include<stdio.h>

int main() {
    char buffer[100];
    int num = 42;
    float pi = 3.14159;
    char name[] = "Alice";

    int len = sprintf(buffer, "Number: %d, Pi: %.2f, Name: %s\n", num, pi, name);

    if(len > 0) {
        printf("Formatted string: %s\n", buffer);
        printf("Length of formatted string: %d\n", len);
    } else {
        fprintf(stderr, "Error occurred in sprintf\n");
    }

    return 0;
}