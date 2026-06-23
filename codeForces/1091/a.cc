#include <stdio.h>
#include <stdbool.h>

int main() {
    // First scan in number of test cases
    int t;
    scanf("%d", &t);

    // iterate through the test cases
    for (int test_index = 0; test_index < t; test_index++) {
        int n, k;
        scanf("%d", &n);
        scanf("%d", &k);
        int to_set = n * k;

        int sum = 0; // Initialize sum to 0 for each test case

        int next_val;
        for (int i = 0; i < n; i++) {
            scanf("%d", &next_val);
            sum += next_val;
        }

        if ((to_set % 2 != 0) && (sum % 2 == 0)) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }

    return 0;
}
