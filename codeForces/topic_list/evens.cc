//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
#include <bitset>

using namespace std;


// so how will recursion work with pointers?
int main() {
    int n;
    scanf("%d", &n);
    int evens_size;
    if (n % 2 == 0) {
        evens_size = n / 2;
    } else {
        evens_size = n / 2 + 1;
    }
    vector<int> A(evens_size);

    // need to scan the others in
    vector<int> B(evens_size);

    int evens_pointer = 0;
    int odds_pointer = 0;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            scanf("%d", &A[evens_pointer]);
            //printf("%d\n", A[evens_pointer]);
            evens_pointer++;
        } else {
            scanf("%d", &B[odds_pointer]);
            odds_pointer++;
        }
    }

    for (int y = evens_size - 1; y > -1; y--) {
        printf("%d ", A[y]);
    }
}
