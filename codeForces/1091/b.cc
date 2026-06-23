#include <stdio.h>
#include <stdbool.h>

int main() {
    // First scan in number of test cases
    int t;

    int a[100000];
    int p[100000];

    int special_sign;
    scanf("%d", &t);

    int left;
    int right;

    int a_pointer;

    for (int test_index = 0; test_index < t; test_index++) {
        int n, k;
        scanf("%d %d", &n, &k);

        // in this version of the problem, k=1 always
        // Add all the numbers to the array except the special index?
        // How many ''groups'' lie between you and furthest malignant group
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int j = 0; j<k; j++) {
            scanf("%d", &p[j]);
        }

        
        int cur_right_sign;
        int cur_left_sign;

        int left_val;
        int right_val;

        int num_left_groups;
        int num_right_groups;

        int to_print;
        if (n == 0) {
            printf("%d\n", 0);
            continue;
        }

        // Then: We iterate through the list one more time, two pointers, counting groups in each direction
        for (int p_index=0; p_index < k; p_index++) {
            int p_actual = p[p_index] - 1;
            num_left_groups = 0;
            num_right_groups = 0;
            left = p_actual;
            right = p_actual;
            
            a_pointer = p_actual;
            // Our initial sign
            special_sign = a[p_actual];
            cur_left_sign = special_sign;
            cur_right_sign = special_sign;

            left--;
            right++;
            
            while (left >= 0 || right < n) {
                if (left >= 0) {
                    left_val = a[left];
                    if (left_val != cur_left_sign) {
                        cur_left_sign = left_val;
                        num_left_groups++;
                    }
                    left--;
                }
                if (right < n) {
                    right_val = a[right];
                    if (right_val != cur_right_sign) {
                        cur_right_sign = right_val;
                        num_right_groups++;
                    }
                    right++;
                }
            }

            if (num_left_groups > num_right_groups) {
                if (cur_left_sign == special_sign && num_left_groups > 0) {
                    // means the last change was back to a non-malignant
                    to_print = num_left_groups - 1;
                } else {
                    to_print = num_left_groups;
                }
            } else {
                if (cur_right_sign == special_sign && num_right_groups > 0) {
                    // means the last change was back to a non-malignant
                    to_print = num_right_groups - 1;
                } else {
                    to_print = num_right_groups;
                }
            }
            if (to_print > 0) {
                // for the initial bit!
                to_print += 1;
            }
            printf("%d\n", to_print);
        }
    }
}

