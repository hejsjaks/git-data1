#include <stdio.h>
#include <stdlib.h>

int main(void){
    int na;
    int el_num;
    printf("요소 개수 : ");
    scanf("%d", &na);
    int *foo = calloc(na, sizeof(int));

    if(foo == NULL)
    puts("메모리 확보에 실패했습니다");
    else{
        printf("초기화 상태 확인\n");
        for(int i =0; i < el_num; i++){
            printf("foo[%d] = %d\n", i, foo[i]);
        }

        printf("%d개의 정수를 입력하세요\n", na);
        for(int i = 0; i < na; i++) {
            printf("a[%d] : ", i);
            scanf("%d", &foo[i]);

        }
        printf("각 요소값은 아래와 같습니다\n", na);
        for (int i = 0; i < na; i++)
        printf("a[%d] = %d\n",i,foo[i]);
        free(foo);
    }
}
