#include <stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    printf("%s", (input % 2 == 0) ? "even" : "odd");
}