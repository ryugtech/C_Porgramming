#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer;
    int num;
    int count = 0;

    srand(time(NULL));

    answer = rand() % 100 + 1;

    printf("1부터 100 사이의 숫자를 맞춰보시오.");

    while(1)
    {
        printf("숫자 입력: ");
        scanf("%d", &num);
        count++;

        if (answer > num)
        {
            printf("더 큰 수입니다");
        }
        else if (answer < num)
        {
            printf("더 작은 수입니다");
        }
        else
        {
            printf("정답입니다!\n");
            printf("시도 횟수: %d", count);
            break;
        }
    }

    return 0;
}