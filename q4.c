#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter 1st Number ");
    scanf("%d",a);
    printf("Enter 2nd Number ");
    scanf("%d",b);
    printf("Enter the operator");
    scanf("%c",&ch);
  

   switch(ch)
   {
   case '+':
    printf("sum=%d",a+b);
    break;
    case '-':
    printf("sub=%d",a-b);
    break;
     case '*':
    printf("mul=%d",a*b);
    break;
     case '/':
    printf("div=%d",a/b);
    break;
   default:
   printf("Enter a valid operator");
    break;
   }

return 0;
}