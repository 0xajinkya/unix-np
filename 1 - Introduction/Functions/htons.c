#include<stdio.h>
#include<arpa/inet.h>

int main() {
    uint16_t host_port = 8080;
    uint16_t network_port;
    network_port = htons(host_port);

    printf("Host order: %u\n", host_port);
    printf("Network order: %u\n", network_port);
    
    return 0;
}