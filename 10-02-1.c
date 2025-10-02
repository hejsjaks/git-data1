#include <stdio.h>
#include <stdlib.h>
//배열의 요소를 역순으로 정리

int main(void){

int nx;

printf("요소 개수: ");
scanf("%d", &nx);
int *x = calloc(nx, sizeof(int));
for(int i = 0; i < nx; i++){
	printf("x[%d] : ", i);
	scanf("%d", &x[i]);

}
ary_reverse(x, nx);
printf("배열의 요소를 역순으로 정렬 완료\n");
for(int i = 0; i < nx; i++)
	printf("x[%d] = %d\n", i, x[i]);
free(x);
return 0;
}	