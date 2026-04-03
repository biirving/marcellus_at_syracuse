#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char a[100];
    char b[100];

    scanf("%s", a);
    scanf("%s", b);

    // Now, make the comparison
    int len = (int)strlen(a);

    for (int i = 0; i < len; i++) {
        if((int)tolower(a[i]) < (int)tolower(b[i])) {
            printf("%d\n", -1);
            return 0;
        } else if ((int)tolower(a[i]) > (int)tolower(b[i])) {
            printf("%d\n", 1);
            return 0;
        } else if (i == len - 1) {
            printf("%d\n", 0);
            return 0;
        }
    }
}