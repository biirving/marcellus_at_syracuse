
// determine the number of "good" sub-arrays
// 'good' array: max-val - min-val = gcd of array
// permutation: meaning that the array contains 1-m (where m is length of array)
// but NOT ordered

// https://codeforces.com/contest/2226/problem/B
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
using namespace std;

int main() {
    // First scan in number of test cases
    int t;
    scanf("%d", &t);
    int n;
    int a[200000];
    int global_index;
    int moving_index;

    int running_gcd;
    int cur_gcd;

    int cur_min;
    int cur_max;
    int cur_difference;
    int num_valid_subarrays;

    // iterate through the test cases
    // the key here is: how do we iterate through?
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j< n; j++) {
            scanf("%d", &a[j]);
        }

        // If the gcd between two numbers is less than the distance
        // between them
        // move index forward
        // else: 
        // check next
        // wait: how do two consecutive gcd's relate?
        // how do we accumulate the gcds?
        // gcd of the gcds...

        global_index = 0;
        moving_index = 0;

        running_gcd = 0;
        cur_min = 0;
        cur_max = 0;
        cur_difference = 0;

        num_valid_subarrays = 0;

        

        while(global_index < n - 1) {
            // Then we are at the end of the array. We gotta break
            if (moving_index == n - 1) {
                break;
            }
            // first: get running cur min 
            // running cur max
            if (a[moving_index] < cur_min || cur_min == 0) {
                cur_min = a[moving_index];
            } 
            if (a[moving_index] > cur_max) {
                cur_max = a[moving_index];
            }

            if (a[moving_index + 1] < cur_min) {
                cur_min = a[moving_index + 1];
            } 
            if (a[moving_index + 1] > cur_max) {
                cur_max = a[moving_index + 1];
            }

            cur_difference = cur_max - cur_min;

            // then, we get our current gcd 
            cur_gcd = std::gcd(a[moving_index], a[moving_index+1]);
            // means we have a running gcd
            if (running_gcd != 0) {
                running_gcd = std::gcd(cur_gcd, running_gcd);
            } else {
                running_gcd = cur_gcd;
            }

            // this subarray is invalid: reset everything
            // and move index
            // is this the only reset condition
            if (running_gcd < cur_difference) {
                cur_min = 0;
                cur_max = 0;
                running_gcd = 0;
                global_index++;
                // we start searching from the new global index
                moving_index = global_index;
            } else if (running_gcd > cur_difference) {
                // chance of convergence
                // keep going, to see if cur_difference wides 
                // and running gcd diminishes
                moving_index++;
            } else {
                // valid subarray! 
                // num_valid_subarrays can be increased by 1
                // can move index forward

                // problem:
                // First: how do you take advantage of permutations?
                // two: This could miss valid samples
                // [a_1, a_2, a_3] valid subarray: 
                // [a_2, a_3] also valid? How to capture that?
                // need a second pointer
                num_valid_subarrays++;
                moving_index++;
            }
        }
        printf("%d\n", num_valid_subarrays);
    }
}