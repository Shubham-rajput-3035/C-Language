#include <stdio.h>
int main()
{
    int i, n, x;
    printf("Enter two numbers: ");
    scanf("%d%d", &n, &x);
    for (i = 1; i <= n; i++)
    {
        printf("%d", x * x / i * i);
        printf("\n");
    }
}