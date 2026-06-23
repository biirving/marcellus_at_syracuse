//https://codeforces.com/contest/2227/problem/D
#include <bits/stdc++.h>

using namespace std;

// Yousef has given you array a of 2n integers
// Every integer x \in [0, n - 1] appears twice in array
// find a subarray a_l, a_{l + 1}, ... a_r that is palindrome


// guaranteed that EVERY integer in the range [0, n - 1] appears twice
int main() {
    int t;
    scanf("%d", &t);
    vector<int> A;
    while (t--) {            
        int n;
        scanf("%d", &n);

        // so max mex is n - 1
        // is there a palindrome which satisides mex(p) = n - 1
        vector<int> L(n, -1);
        vector<int> R(n, -1);
        for (int i = 0; i < n; i++) {
            int cur_arr_val;
            scanf("%d", &cur_arr_val);
            if (L[cur_arr_val] == -1) {
                L[cur_arr_val] = i;
            } else {
                R[cur_arr_val] = i;
            }
        }
        // Now, we have the left and right indices
        // For all vals
    }
}