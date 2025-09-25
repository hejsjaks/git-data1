#include <stdio.h>

#define N 5     // 배열의 요소 개수
int main()
{
    int foo[N];
    for (int i = 0; i < N; i++) { // 각 요소의 값을 출력
        printf("foo[%d] : ", i);
        scanf("%d",&foo[i]);
    }
    puts("각 요소의 값");
    for (int i = 0; i < N; i++) { // 각 요소의 값을 출력
        printf("foo[%d] = %d\n", i, foo[i]);
    } 
    return 0;
}