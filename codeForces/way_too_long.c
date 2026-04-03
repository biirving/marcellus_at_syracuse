#include <stdio.h>
#include <string.h>

int main() {
    int n, j;
    scanf("%d", &n);
    char c[100][101];
    char d[100][20];
    for (int i = 0; i < n; i++) {
        j = 0;
        scanf("%s", c[i]);
        int len = strlen(c[i]);
        if (len > 10) {
            sprintf(d[i], "%c%d%c", c[i][0], len - 2, c[i][len - 1]);
        } else {
            strcpy(d[i], c[i]);
        }
        printf("%s\n", d[i]);
    }
    return 0;
}