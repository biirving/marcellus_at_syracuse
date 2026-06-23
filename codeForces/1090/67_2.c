
#include <stdio.h>
#include <stdbool.h>


// as good a problem as any
int main() {
    int t;

    int to_negate[7];
    int cur_max;
    int cur_int;
    int cur_max_index;
    int cur_total;

    scanf("%d", &t);
    for (int test_index = 0; test_index < t; test_index++) {
        cur_max = -67;
        cur_total = 0;
        for (int n = 0; n < 7; n++) {
            scanf("%d", &to_negate[n]);
            cur_int = to_negate[n];
            if (cur_int > cur_max) {
                cur_max = cur_int;
                cur_max_index = n;
            }
        }
        for (int j = 0; j < 7; j++) {
            if(j == cur_max_index) {
                cur_total += to_negate[j];
            } else {
                cur_total += to_negate[j] * -1;
            }
        }
        printf("%d\n", cur_total);
    }
}