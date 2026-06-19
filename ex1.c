#include <stdio.h>
int main() {
    for(int i=0; i<999; i++) {
        for(int j=0; j<999; j++) {
            printf("Hello, World! %d\n", j);
            printf("We are %d\n", i);
        }
    }
    return 0;
}