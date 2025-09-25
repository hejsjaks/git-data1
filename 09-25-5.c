#include <stdio.h>
#include <stdlib.h>
//배열의 요소의 최대 값을 구하고 출력
int maxod(const int foo[], int elem_cnt){
    int max = foo[0];
    for(int i = 1; i < elem_cnt; i++)
        if(foo[i] > max) max = foo[i];
        return max;
}
int main(void){
    int number;
    printf("사람 수: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    printf("%d명의 키를 입력하세요\n", number);
    for (int i = 0; i < number; i++){
        printf("height[%d] : ",i);
        scanf("%d", &height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);

    return 0;

}