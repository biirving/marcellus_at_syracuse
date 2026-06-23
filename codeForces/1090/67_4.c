#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    int n;
    scanf("%d", &t);

    int cur_num;
    for (int i = 0; i < t; i++) {
        cur_num = 1;
        scanf("%d", &n);
        // Ok, so we need the GCD to be unique?
        for (int j = 0; j < n; j++) {
            // We want the GCD to be j
            printf("%d ", cur_num);
            cur_num *= 2;
        }
        printf("\n");
    }
}