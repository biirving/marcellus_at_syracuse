
//https://codeforces.com/contest/2236/problem/B
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
    int k;
    bool has_1 = 0;

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        scanf("%d", &k);

        vector<int> h(n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &h[j]);
            if (h[j] == 1) {
                has_1 = 1;
            }
        }
        if (has_1 == 0) {
            printf("YES\n");
            continue;
        }

        // cases:
        // If we have an unflippable 1 (meaning, there is a 1 with no adjoining value)
        // Or: A value has 1 adjoining flippable and vice versa, and they are opposite values 
        // so what should our pass do?
        for (int z = 0; z < n; z++) {

            // unflippable 1
            // checking for first case
            if (z < k and z + k > n) {
                if (h[z] == 1) {
                    printf("NO\n");
                    break;
                }
            }

            // How do we check for 1 adjoining flippable
        }
        
    }

}