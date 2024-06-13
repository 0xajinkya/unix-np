#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>

int main() {
    const char *ip4_str = "192.168.1.1";
    struct in_addr ip4_addr;

    if(inet_pton(AF_INET, ip4_str, &ip4_addr) != 1) {
        perror("inet_pton");
        exit(EXIT_FAILURE);
    }

    printf("IPv4 address is binary form: 0x%x\n", ip4_addr.s_addr);
    return 0;
}