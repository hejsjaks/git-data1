#include <stdio.h>
#include <stdlib.h>
// 다차원 배열 만들기

#define VMAX 21 // 시력 분포의 개수 2.1 × 10

typedef struct {
    char name[20];   // 이름
    int height;      // 키
    double vision;   // 시력
} PhysCheck;

// 키의 평균값
double ave_height(const PhysCheck dat[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += dat[i].height;
    return sum / n;
}

// 시력 분포
void dist_vision(const PhysCheck dat[], int n, int dist[])
{
    for (int i = 0; i < VMAX; i++)
        dist[i] = 0;
    for (int i = 0; i < n; i++)
        if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
            dist[(int)(dat[i].vision * 10)]++;
}

int main(void) {

    
}