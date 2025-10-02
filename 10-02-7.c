#include <stdio.h>
#define VMAX 21

typedef struct {
    char name[20];
    int height;
    double vision;
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

int main(void)
{
    PhysCheck x[] = {
        {"홍길동", 162, 0.3},
        {"이수민", 173, 0.7},
        {"김영준", 175, 2.0},
        {"박지현", 171, 1.5},
        {"최윤서", 168, 0.4},
        {"장민지", 174, 1.2},
        {"한서준", 169, 0.8}
    };
    int nx = sizeof(x) / sizeof(x[0]);
    int vdist[VMAX];

    puts(" 신체검사 리스트 ");
    puts(" 이름        키  시력");
    puts("----------------------");
    for (int i = 0; i < nx; i++)
        printf("%-8s %3d %5.1f\n", x[i].name, x[i].height, x[i].vision);

    printf("\n평균 키: %5.1fcm\n", ave_height(x, nx));
    dist_vision(x, nx, vdist);

    printf("\n시력 분포\n");
    for (int i = 0; i < VMAX; i++)
        printf("%3.1f~ : %2d명\n", i / 10.0, vdist[i]);

    return 0;
}
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