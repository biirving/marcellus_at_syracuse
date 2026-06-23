//https://codeforces.com/problemset/problem/1646/C
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
#include <bitset>

using namespace std;

// a number is powerful if it is a power of 2 or factorial
// m is powerful if there eixsrts a non-negative integer d s.t m = 2^d or m = d!
// find minimum number k s.t n can be represented as sum of k distinct integers

// trying to find k powerful numbers which add up to n

// legendre's formula
// the highest power of 2 that divides n! 
// the exponent of the highest power of 2 dividing n! is n - s_2(n)
// s_2(n) is the sum of the digits of n in binary
// 10! the binary of 10 is 1010_2 , sum of the digits is 1 + 0 + 1 + 0 = 2
// 10 - 2 = 8, thus 2^8 (256) is the largest power of 2 that divides 10!

// We want to find this first
// Because we are trying to find k
// then, we can do the same with the remainder

// n = 2^(n - s_2(n)) * x, where x is some integer

// What is the largest factorial that matters?


int main() {

    int t;
    scanf("%d", &t);
    int n;

    int 

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n == 1) {
            printf("%d\n", 1);
        }

        // First:
        // we are finding minimum number k
        int k = 1;

        // convert our int
        // 10^12 can be represented in 40 bits
        unsigned long long val = n & ((1ULL << 40) - 1);

        while (true) {
            
        }

    }
}
