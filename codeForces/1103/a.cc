//https://codeforces.com/contest/2236/problem/A
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

    int smallest;
    int largest;
    int cur;
    int k;
    for (int i = 0; i<t; i++) {
        smallest = 7;
        largest = 0;

        int n;
        scanf("%d", &n);
        int h[n];

        for (int j = 0; j<n; j++) {
            scanf("%d", &cur);
            if (cur < smallest) {
                smallest = cur;
            } 
            if (cur > largest) {
                largest = cur;
            }
        }
        k = largest - smallest + 1;
        printf("%d\n", k);
    }
}
