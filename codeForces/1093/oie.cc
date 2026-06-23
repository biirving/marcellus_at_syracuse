//https://codeforces.com/contest/2220/problem/B
#include <stdio.h>
#include <stdbool.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        long long m;
        scanf("%d %lld", &n, &m);
        int v[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        bool ok = true;
        int cur_in_a_row = 1;
        for (int j = 1; j < n; j++) {
            if (v[j - 1] == v[j]) {
                cur_in_a_row++;
                if (cur_in_a_row >= m) {
                    ok = false;
                    break;
                }
            } else {
                cur_in_a_row = 1;
            }
        }
        printf(ok ? "YES\n" : "NO\n");
    }
}