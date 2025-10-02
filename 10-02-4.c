#include <stdio.h>
#include <stdlib.h>
// 1000이하소수 나열하기

int main(void) {

int prime[500];
int ptr = 0;
unsigned long counter = 0;
prime[ptr++] = 2;

for (int i = 3; i <= 1000; i += 2) {
    int i;
    for (int j = 2; j * j <= i; j++) {
        counter++;
        if (i % j == 0) {
            break;
        }
    }
    if (i) {
        prime[ptr++] = i;
    }
}
printf("2부터 1000까지의 소수:\n");
for (int i = 0; i < ptr; i++) {
    printf("%d ", prime[i]);
}
printf("\n나눗셈 횟수: %lu\n", counter);
return 0;

}