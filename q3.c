#include <stdio.h>
void main()
{
    int n, r, sum = 0;
    printf("Enter any Number");
    scanf("%d", &n);
    do
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    } while (n != 0);
    printf("The Sum is %d", sum);
}