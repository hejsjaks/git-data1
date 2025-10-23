#include <stdio.h>
#include <stdlib.h>
//선형 검색 다루기
//요소 개수가n인 배열 a에서 값이 key인 요소를 검색하는 코드

int search(int a[], int n, int key) {
    int i = 0;
    while (1)
    {
        if (i == n)
        return -1;
        if (a[i] == key)
        return i;
        i++;
    }
    

}