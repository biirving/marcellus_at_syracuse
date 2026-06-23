#include <stdio.h>
#include <stdbool.h>



int main() {
    int t;
    int integer;
    int integer_plus_one;
    scanf("%d", &t);
    for (int u=0; u < t; u++) {
        scanf("%d", &integer);
        if(integer == 67) {
            printf("%d\n", 67);
        } else {
            integer_plus_one = integer + 1;
            printf("%d\n", integer_plus_one);
        }
    }
}