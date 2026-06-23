// https://codeforces.com/gym/106249/problem/A
#include <cstdio>
#include <algorithm>
using namespace std;

// maximum number of substrings with MITIT
int main() {
    int t;
    scanf("%d", &t);

    // consume newline after t
    getchar();

    for (int i = 0; i < t; i++) {
        char cur_char;
        char last_char = '\0';

        int num_ms = 0;
        int num_ts = 0;
        int total_mitit = 0;

        while (true) {
            scanf("%c", &cur_char);

            // end condition
            if (cur_char == '\n' || cur_char == EOF) {
                total_mitit += min(num_ts / 2, num_ms);
                break;
            }

            // initialize last_char
            if (last_char == '\0') {
                last_char = cur_char;
                if (cur_char == 'M') {
                    num_ms += 1;
                } else if (cur_char == 'T') {
                    num_ts += 1;
                }
                continue;
            }

            // count number of M's and T's in a block
            if (cur_char == 'M') {

                if (last_char == 'M' || last_char == 'T') {
                    total_mitit += min(num_ts / 2, num_ms);
                    num_ms = 1;
                    num_ts = 0;
                } else {
                    num_ms += 1;
                }
            } else if (cur_char == 'T') {
                if (last_char == 'M' || last_char == 'T') {
                    total_mitit += min(num_ts / 2, num_ms);
                    num_ms = 0;
                    num_ts = 1;
                } else {
                    num_ts += 1;
                }
            } else if (cur_char == 'I') {
                if (last_char == 'I') {
                    total_mitit += min(num_ts / 2, num_ms);
                    num_ms = 0;
                    num_ts = 0;
                }
            }

            last_char = cur_char;
        }

        printf("%d\n", total_mitit);
    }

    return 0;
}
