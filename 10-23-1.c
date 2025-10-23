#include <stdio.h>
#include <stdlib.h>
//선형 검색 다루기
//요소 개수가n인 배열 a에서 값이 key인 요소를 검색하는 코드

int main(void) {
    int nx,ky;
    puts("선형 검색");
    printf("요소 개수: ");
    scanf("%d",&nx);
    int *x = calloc(nx , sizeof(int));
    for(int i = 0; i < nx; i++) {
        printf("x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    printf("검색할 값: ");
    scanf("%d",&ky);
    int idx = search(x,nx,ky);
    if(idx == -1)
        puts("검색값을 갖는 요소가 없습니다.");
    else
        printf("%d은(는) x[%d]에 있습니다.\n",ky,idx);
    free(x);
    return 0;
    

}