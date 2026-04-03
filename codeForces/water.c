//https://codeforces.com/problemset/problem/2207/C
#include <stdio.h>
#include <stdbool.h>


int candidate_column_heights[2000][2000];

// as good a problem as any
int main() {
    int t, n, h;
    scanf("%d", &t);
    int column_pointer;
    // our column list
    int a[2000];
    // candidate drainage points
    int candidates[2000];
    int c_pointer;
    int cur_coordinate, cur_minima, cur_minima_index; 
    // Iterate through the test cases
    for (int u=0; u < t; u++) {
        scanf("%d %d", &n, &h);  
        for(int j = 0; j<n; j++) {
            
            scanf("%d", &a[j]);
        }

        if (n == 1) {
            int height = h - a[0];
            printf("%d\n", height); 
            continue;                   
        }

        cur_coordinate = 0;
        c_pointer = 0;
        for (int k = 0; k < n; k++) {  
            bool left_ok  = (k == 0) || a[k] <= a[k-1];
            bool right_ok = (k == n - 1) || a[k] <= a[k+1];
            bool not_flat_continuation = (k == 0) || a[k] != a[k-1] || (k == n - 1);
            bool edge_case = (k == 0) || (k == n-1);
            if ((left_ok && right_ok && not_flat_continuation) || edge_case) {
                candidates[c_pointer++] = k;
            }
        }
        

        int drain_height;
        int drain_index;
        int left;
        int right;
        int left_height;
        int right_height;

        for (int i = 0; i < c_pointer; i++) {
            drain_index = candidates[i];
            drain_height = a[drain_index];
            left_height = drain_height;
            right_height = drain_height;
            left = drain_index;
            right = drain_index;
            candidate_column_heights[i][drain_index] = drain_height;

            while(left > 0 || right < n - 1) {  
                if (left > 0) {
                    left--;
                    if (a[left] > left_height) {
                        left_height = a[left];
                    }
                    candidate_column_heights[i][left] = left_height;
                }
                if (right < n - 1) {  
                    right++;
                    if (a[right] > right_height) {
                        right_height = a[right]; 
                    }
                    candidate_column_heights[i][right] = right_height;
                }
            }
        }

        // if (u == 7) {
        // for (int i = 0; i < c_pointer; i++) {
        //     printf("candidate %d\n", candidates[c_pointer]);
        // }
        // }
      

        // Then, get the min at each column
        long long max_total = 0;   
        long long cur_total;       
        int *c1, *c2;              
        for (int i = 0; i < c_pointer; i++) {
            for (int j = i + 1; j < c_pointer; j++) {  
                if (i != j) {
                    cur_total = 0;
                    c1 = candidate_column_heights[i];  
                    c2 = candidate_column_heights[j];

                    for (int z = 0; z < n; z++){
                        if(c1[z] > c2[z]){
                            cur_total += h - c2[z]; 
                        } else {
                            cur_total += h - c1[z]; 
                        }
                    }
                    if (cur_total > max_total) {
                        max_total = cur_total;
                    }
                }
            }
        }
        printf("%lld\n", max_total); 
    }
}
