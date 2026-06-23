//https://codeforces.com/contest/2222/problem/A
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
    int n;
    int a[10];

    int flag;
    // iterate through the test cases
    for (int test_index = 0; test_index < t; test_index++) {
        scanf("%d", &n);
        flag = 0;
        for (int i = 0; i < n; i++){
            // gotttaaa finish iterating
            scanf("%d", &a[i]);
            if (a[i] != 100 && i == n - 1) {
                if (flag == 0) {
                    printf("No\n");
                }
            }
            if (a[i] == 100) {
                if (flag == 0) {
                    printf("Yes\n");
                }
                flag = 1;
            }
        }
    }
}