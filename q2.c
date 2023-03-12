#include<stdio.h>
int main()
{
int a;
printf("Enter A number");
scanf("%d",&a);
if (a>0)
{
    printf("Possitive");
    /* code */
}
else if (a<0)
{
   printf("Negative");
}
else
{
 printf("Zero");
}

return 0;

}