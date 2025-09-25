#include <stdio.h>

int main(void){
    int n;
    printf("정수: ");
    scanf("%d", &n);

    (n > 0) ?
    printf("양수입니다.\n") : printf("음수입니다.\n");
    
    return 0;
}