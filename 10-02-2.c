#include <stdio.h>
#include <stdlib.h>
// 10진수를 2진수로 변환

int main(void) {
	int num;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	if (num == 0) {
		printf("2진수: 0\n");
		return 0;
	}

	int bin[32];
	int idx = 0;
	while (num > 0) {
		bin[idx++] = num % 2;
		num /= 2;
	}
	printf("2진수: ");
	for (int i = idx - 1; i >= 0; i--) {
		printf("%d", bin[i]);
	}
	printf("\n");
	return 0;
}

int main1(void) {
	puts("10진수를 기수 변환합니다.");

	int retry;
	do {	
		unsigned no;
		int cd;
		char cno[512];

		printf("변환하는 음이 아닌 정수: ");
		scanf("%u", &no);

		do {
			printf("어떤 진수로 변환할까요? (2~36): ");
			scanf("%d", &cd);
		} while (cd < 2 || cd > 36);
	} while (retry);
}