#include <stdio.h>

int main(void)
{
    int month;
    int day;

    scanf("%d", &month);

    switch(month)
    {
        case 2:
            day = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        default:
            day = 31;
    }

    printf("%d", day);
}