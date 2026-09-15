#include <stdio.h>

int main(void)
{
    int n1, n2;
    int temp;

    scanf("%d", &n1);
    scanf("%d", &n2);

    temp = n2;
    
    while(temp != 0)
    {
        printf("%d\n", n1 * (temp % 10));
        temp /= 10;
    }

    printf("%d", n1 * n2);
}