#include <stdio.h>

//int형 배열을  초기화 하고 출력

int main(void){
    int foo[5] = {1,2,3,4,5};
    int foo_size = sizeof(foo) / sizeof(foo[0]);
    printf("배열 a의 요소 개수는 %d입니다\n", foo_size);

    for(int i =0; i < foo_size; i++)
    printf("foo[%d] = %d\n", i,foo[i]);

    return 0;
}                                                                                                                                                                  