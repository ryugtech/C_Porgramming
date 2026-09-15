#include <stdio.h>

int main(void)
{
    int year;

    printf("0. 연도를 입력하세요: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("1. 윤년");
    }
    else
    {
        printf("2. 평년");
    }

    return 0;
}