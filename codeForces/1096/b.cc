
//https://codeforces.com/contest/2227/problem/B
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
using namespace std;

// s of length n
// consisting only of characters ( and )

// choose a substring of s and remove it
// then: reinsert removed characters

int main() {
    int t;
    scanf("%d", &t);

    int n;

    char s[200000];

    int num_forwards;
    int num_backwards;
    for (int i = 0; i < t; i++) {
        num_forwards = 0;
        num_backwards = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++) {
            scanf(" %c", &s[j]);
        }
        for(int z = 0; z < n; z++) {
            if (s[z] == '(') {
                num_forwards += 1;
            } else {
                num_backwards += 1;
            }
        }
        if (num_forwards != num_backwards) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}