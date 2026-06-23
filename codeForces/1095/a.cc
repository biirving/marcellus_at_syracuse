// https://codeforces.com/contest/2226/problem/A
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;


// global variables
long long DEFAULT_MODULO = 676767677;

int main() {
    // First scan in number of test cases
    int t;
    scanf("%d", &t);
    int n;

    int a[100];

    long long total_sum;

    // iterate through the test cases
    for (int i = 0; i < t; i++) {
        total_sum = 0;
        // get the length of the array
        scanf("%d", &n);
        // need to find the minimum total cost
        // minimum sum of the multiplied sub sequences
        // essentially: Just multiply out the ones
        // otherwise, adding is always going to be smaller then multiplying
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }
        for (int z = 0; z < n; z++) {
            if (a[z] == 1 && z < (n - 1)) {
                // we can multiply out this 1 
                continue;
            } else {
                total_sum += a[z];
            }
        }
        printf("%lld\n", total_sum % DEFAULT_MODULO);
    }
}