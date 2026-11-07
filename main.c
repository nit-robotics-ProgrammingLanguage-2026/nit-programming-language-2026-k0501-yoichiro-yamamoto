#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (0<=input && input<10 /* TODO: ここに条件式を書く */)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
