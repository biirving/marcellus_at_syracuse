#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    int n;
    scanf("%d", &t);

    int output_permutation[100000];
    int to_permute;
    int counter;
    for (int u=0; u < t; u++) {
        scanf("%d", &n);
        to_permute = 3 * n;
        counter = 0;
        for (int i = 0; i < n; i++) {
            printf("%d ", i + 1);
            printf("%d ", to_permute - (counter + 1));
            printf("%d ", to_permute - counter);
            counter += 2;
        }
        printf("\n");
    }
}
