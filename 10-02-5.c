#include <stdio.h>
#include <stdlib.h>
// 1000이하소수 나열하기

int main(void) {

    int prime[500];
    int ptr = 0;
    unsigned long counter = 0;
    prime[ptr++] = 2;
    prime[ptr++] = 3;

    for (int n = 5; n <= 1000; n += 2) {
        int flag = 1;
        for (int i = 0; i < ptr; i++) {
            counter++;
            if (n % prime[i] == 0) {
                flag = 0;
                break;
            }
            if (prime[i] * prime[i] > n) break;
        }
        if (flag) {
            prime[ptr++] = n;
        }
    }
    printf("2부터 1000까지의 소수:\n");
    for (int i = 0; i < ptr; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n나눗셈 횟수: %lu\n", counter);
    return 0;

}