
// Tower of hanoi
#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <unordered_set>
// #include <algorithm>
#include <numeric>
#include <bitset>

using namespace std;


void hanoi(int n, int from, int to, int via) {
    if (n == 1) {
        printf("%d %d\n", from, to);
        return;
    }
    hanoi(n - 1, from, via, to);
    printf("%d %d\n", from, to);
    hanoi(n - 1, via, to, from);
}

int main() {
    int n;
    scanf("%d", &n);
    long long total_moves = (1LL << n) - 1;
    printf("%lld\n", total_moves);
    hanoi(n, 1, 3, 2);
}