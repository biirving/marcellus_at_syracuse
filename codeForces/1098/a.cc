
//https://codeforces.com/contest/2228/problem/A
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    int n;
    int w[100];



    // Find the maximum number of subsequences that are divisble by 3
    for (int i = 0; i< t; i++) {
        scanf("%d", &n);
        vector<int>  w(n);

        int num_0s = 0;
        int num_1s = 0;
        int num_2s = 0;

        int num_common;
        int remainder;
        int remainder_sign;

        int num_subs = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &w[j]);
            if (w[j] == 0) {
                num_0s += 1;
            } else if (w[j] == 1) {
                num_1s += 1;
            } else if (w[j] == 2) {
                num_2s += 1;
            }

        }
        num_subs += num_0s;
        if (num_1s > num_2s) {
            num_common = num_2s;
            remainder = num_1s - num_common;
            remainder_sign = 1;
        } else if (num_2s > num_1s) {
            num_common = num_1s;
            remainder = num_2s - num_common;
            remainder_sign = 2;
        } else {
            num_common = num_1s;
            remainder = 0;
        }

        num_subs += num_common;
        if (remainder > 0) {
            num_subs += remainder / 3;
        }
        printf("%d\n", num_subs);
    }
}