#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            printf("%d", i);
            if (i < N) {
                printf(" ");
            }
        }
    } else {
        for (int i = N; i <= 0; i++) {
            printf("%d", i);
            if (i < 0) {
                printf(" ");
            }
        }
    }

    printf("\n");

    return 0;
}
