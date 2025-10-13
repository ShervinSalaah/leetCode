#include <stdio.h>
#include <stdlib.h>

int cmp_ll(const void *p1, const void *p2) {
    long long a = *(const long long*)p1;
    long long b = *(const long long*)p2;
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    long long *arr = (long long*)malloc(sizeof(long long) * N);
    if (!arr) return 0;

    for (int i = 0; i < N; ++i) {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, N, sizeof(long long), cmp_ll);

    long long max_count = 0;
    long long fav_count = 0;

    long long curr_count = 1;
    for (int i = 1; i < N; ++i) {
        if (arr[i] == arr[i-1]) {
            curr_count++;
        } else {
            if (curr_count > max_count) {
                max_count = curr_count;
                fav_count = 1;
            } else if (curr_count == max_count) {
                fav_count++;
            }
            curr_count = 1;
        }
    }
    // handle last group
    if (curr_count > max_count) {
        max_count = curr_count;
        fav_count = 1;
    } else if (curr_count == max_count) {
        fav_count++;
    }

    printf("%lld\n", fav_count);

    free(arr);
    return 0;
}
