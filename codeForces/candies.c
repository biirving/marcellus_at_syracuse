
/*
 * There are N kids sitting on the floor in a row. We give each kid a
 * number from 0 to N-1 from left to right. The kid that was given
 * number i holds Ci candies (for 0 <= i < N). How many candies have
 * all the kids between positions A and B (inclusively)?
 *
 * Input:
 *   First line: integer N (1 <= N <= 1000000) - the number of kids.
 *   Second line: N integers C0, C1, ..., CN-1 (1 <= Ci <= 1000) -
 *     the i-th of them means the kid with number i holds Ci candies.
 *   Third line: two integers A and B (0 <= A <= B < N) - the borders
 *     of the interval in our query.
 *
 * Output:
 *   A single number - the sum of candies held by children between
 *   positions A and B (inclusively), i.e. CA + CA+1 + ... + CB.
 */


#include <stdio.h>

int main() {
    int n, c[1000000], a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &c[i]);
    scanf("%d", &a)
    scanf("%d", &b)

    int total = 0;
    for (int i = a; i <= b; i++) total+=c[i];
    printf("%d\n", total);
    return 0;
}