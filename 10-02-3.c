#include <stdio.h>
#include <stdlib.h>
// 1000이하소수 나열하기

int main(void) {

	int counter = 0;
printf("2부터 1000까지의 소수:\n");
for (int i = 2; i <= 1000; i++) {
    int i;
    for (int j = 2; j * j <= i; j++) {
        counter++;
        if (i % j == 0) {
            i = 0;
            break;
        }
    }
    if (i) {
        printf("%d ", i);
    }
}
printf("\n나눗셈 횟수: %d\n", counter);
return 0;
}