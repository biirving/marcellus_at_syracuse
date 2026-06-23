
// a has n integers
// m ops on a in order
// in ith operation (of m ops) given integer x_i

// select center index u, non-negative length y
// [u - y, u + y] lies entirely within [1, n] (length of array a)

// for each 1<=i<=y swap elements a_(u-i), a_(u+i) (swap the elements same distance from center)

// then mark the element x_i
// which has no relation to the op?

//https://codeforces.com/contest/2222/problem/B
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    // First scan in number of test cases
    int t;
    scanf("%d", &t);
    int m, n;

    int x[100000];

    int odd_length;
    int even_length;

    // iterate through the test cases
    for (int test_index = 0; test_index < t; test_index++) {
        long long final_sum = 0;
        scanf("%d %d", &n, &m);
        if ((n % 2) == 0) {
            odd_length = n / 2;
            even_length = odd_length;
        } else {
            odd_length = (n + 1) / 2;
            even_length = odd_length - 1;
        }
        vector<int> a_odd(odd_length);
        vector<int> a_even(even_length);

        int odd_index = 0;
        int even_index = 0;

        for (int i = 0; i< n; i++){
            // since indices are off by 1
            // "evens" go in odd
            if ((i % 2) == 0) {
                scanf("%d", &a_odd[odd_index]);
                odd_index += 1;
            } else {
                scanf("%d", &a_even[even_index]);
                even_index += 1;
            }
        }

        // sort in descending order
        sort(a_odd.begin(), a_odd.end(), greater<int>());
        sort(a_even.begin(), a_even.end(), greater<int>());
        for (int j = 0; j<m; j++) {
            scanf("%d", &x[j]);
        }
        // now: we want the maximum integers
        // indexes to track where we are in
        // both lists
        odd_index = 0;
        even_index = 0;

        for (int z = 0; z < m; z++) {
            // even x_i (to mark)
            if (x[z] % 2 == 0) {
                // this means we have to mark an element
                if (even_index == 0) {
                    even_index = even_index + 1;
                // We are trying to get maximal possible sum
                } else if (even_index < even_length && a_even[even_index] > 0) {
                    even_index = even_index + 1;
                } // otherwise, we can just vibe, don't want to mark 
                // anymore
            } else {
                if (odd_index == 0) {
                    odd_index = odd_index + 1;
                // We are trying to get maximal possible sum
                } else if (odd_index < odd_length && a_odd[odd_index] > 0) {
                    odd_index = odd_index + 1;
                } // otherwise, we can just vibe, don't want to mark 
            }
        }

        // Then, we sum together remainders of both lists
        for (int evens = even_index; evens < even_length; evens++) {
            final_sum += a_even[evens];
        } 
        for (int odds = odd_index; odds < odd_length; odds++) {
            final_sum += a_odd[odds];
        }
        printf("%lld\n", final_sum);
    }
}