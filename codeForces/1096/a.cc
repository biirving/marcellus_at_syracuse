//https://codeforces.com/contest/2227/problem/A
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
using namespace std;


// start at (0, 0)
// wants to reach (x, y)
// long steps:
// (a + 2, b) OR
// (a, b + 2)

// Allowed to take at most ONE 
// short step
// (a + 1, b) or (a, b + 1)


int main() {
    int t;
    scanf("%d", &t);
    int x, y;
    for (int i = 0; i < t; i++) {
        scanf("%d", &x);
        scanf("%d", &y);
        if (x % 2 != 0 && y % 2 != 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}