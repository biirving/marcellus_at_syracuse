
// Given two numbers S and E
#include <stdio.h>

int step(int start, int end, int count) {
    if (start == end) {
        count+=1;
        return count;
    } else if (start  > end) {
        return count;
    } else {
        count = step(start + 1, end, count);
        count = step(start + 2, end, count);
        count = step(start + 3, end, count);
        return count;
    }
}
int main() {
    int s;
    int e;
    scanf("%d", &s);
    scanf("%d", &e);
    int count = 0;
    count = step(s, e, count);
    printf("%d\n", count);                 
}
