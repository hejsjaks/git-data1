#include <stdio.h>
#include <stdlib.h>
// 다차원 배열 만들기

int main(void) {


}

// 각 달의 날 수
int mdays[2][12] = {
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

// year이 윤년인가?
int isLeap(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

// y년 m월 d일의 그 해 지난 날 수 구하기
int dayof_year(int y, int m, int d)
{
    int days = d;
    for(int i = 1; i < m; i++)
        days += mdays[isLeap(y)][i - 1];
    return days;
}