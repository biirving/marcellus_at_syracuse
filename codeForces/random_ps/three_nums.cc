//https://codeforces.com/problemset/problem/1294/C

#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
#include <bitset>

using namespace std;


// three distinct integers:
// cases:
// if number less than 24: 
// PRINT NO

// else:
// If even:


int main() {

    int t;
    scanf("%d", &t);
    int n;

    int num_1;
    int num_2;
    int num_3;
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n < 24) {
            printf("NO\n");
        }

        // even
        if (n % 2 == 0) {
            num_1 = 2;
            if ((n / 2 % 3) == 0) {
                num_2 = 3;
                num_3 = n / 2 / 3;
                printf("YES\n");
                printf("%d %d %d\n", num_1, num_2, num_3);
            } else if ((n / 2 % 4) == 0) {
                num_2 = 4;
                num_3 = n / 2 / 4;
                printf("YES\n");
                printf("%d %d %d\n", num_1, num_2, num_3);
            } else {
                printf("NO\n");
            }
        } else {
            num_1 = 3;
            if ((n / 3 % 2) == 0) {
                num_2 = 2;
                num_3 = n / 3 / 2;
                printf("YES\n");
                printf("%d %d %d\n", num_1, num_2, num_3);
            } else if ((n / 3 % 5) == 0) {
                num_2 = 5;
                num_3 = n / 3 / 5;
                printf("YES\n");
                printf("%d %d %d\n", num_1, num_2, num_3);
            } else {
                printf("NO\n");
            }
        }
    }

}
