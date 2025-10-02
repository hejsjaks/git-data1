#include <stdio.h>
#include <stdlib.h>
//배열의 요소를 역순으로 정리

int main(void){

	int n, i, temp;
	printf("배열의 크기를 입력하세요: ");
	scanf("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}
	printf("%d개의 정수 입력: ", n);
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	// 역순 정렬
	for(i = 0; i < n / 2; i++) {
		temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
	}
	printf("역순 배열: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;

}