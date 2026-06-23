// https://codeforces.com/contest/2220/problem/A
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool hasDuplicate(vector<int>& a) {
    unordered_set<int> seen;
    for (int x : a) {
        if (!seen.insert(x).second) return true; 
    }
    return false;
}

int main() {
    // First scan in number of test cases
    int t;
    scanf("%d", &t);

    // iterate through the test cases
    for (int test_index = 0; test_index < t; test_index++) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        int cur_sum = 0;
        // scan the integers in
        for (int i = 0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        // [1] is blocked, and can't reorder size 1 array
        // if (a[0] == 1 && n == 1) {
        //     printf("%d\n", 1);
        //     continue;
        // }

        // If the current ordering is only valid ordering
        // then, we print -1

        // if there are duplicates of any integer
        // no ordering is possible
        // will be a blocked position

        // Just sort in descending order
        // If no dupes, print -1
        sort(a.begin(), a.end(), greater<int>());
        bool dupe = hasDuplicate(a);
        if (!dupe) {
            for (int j = 0; j < n; j++) {
                printf("%d ", a[j]);
            }
            printf("\n");
        } else {
            printf("%d\n", -1);
        }
        
    }

    return 0;
}
