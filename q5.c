#include<stdio.h>
int main()
{
float area,peri,di,r,pi=3.14;

    printf("Enter the radius of circle ");
    scanf("%f",&r);
    printf("Dimeter=%f\t",r+r);
    peri=2*pi*r;
    printf("perimeter=%f\t",peri);
area=pi*r*r;
    printf("Area=%f",area);
return 0;
}

