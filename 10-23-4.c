#include <stdio.h>
#include <stdlib.h>
//복잡도

int btn_search(int a[], int n, int key) {
    int pl = 0;
    int pr = n - 1;

    do {
        int pc = (pl + pr) / 2;
        if (a[pc] == key)
            return pc;
        else if (a[pc] < key)
            pl = pc + 1;
        else
            pr = pc - 1;
    } while (pl <= pr);

    return -1;
}

int main(void) {
    int nx,ky;
    puts("이진 검색");
    printf("요소 개수: ");
    scanf("%d",&nx);
    int *x = calloc(nx , sizeof(int));
    printf("오름차순으로 입력하세요.\n");
    printf("x[0]: ");
    scanf("%d",&x[0]);
    for(int i = 1; i < nx; i++) {
        printf("x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    printf("검색할 값: ");
    scanf("%d",&ky);
    int idx = btn_search(x,nx,ky);
    if(idx == -1)
        puts("검색값을 갖는 요소가 없습니다.");
    else
        printf("%d은(는) x[%d]에 있습니다.\n",ky,idx);
    free(x);
    return 0;

}