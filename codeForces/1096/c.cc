// Yousef gives array a of n positive integers

// f(a) denotes number of subarrays of a whose product is divisible by 6
// reorder elements of array a so that f(a) is minimized
// number of subarrays of a whose product is divisible by 6

//https://codeforces.com/contest/2227/problem/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> A, B, C, N;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x % 6 == 0) C.push_back(x);
            else if (x % 2 == 0) A.push_back(x);
            else if (x % 3 == 0) B.push_back(x);
            else N.push_back(x);
        }
        for (int x : A) printf("%d ", x);
        for (int x : N) printf("%d ", x);
        for (int x : B) printf("%d ", x);
        for (int x : C) printf("%d ", x);
        printf("\n");
    }
}
