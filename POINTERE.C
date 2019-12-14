#include<stdio.h>
void area_peri(int,float *,float *);
int main()
{
 int radius;
 float area,perimeter;
 printf("Enter radius of a circle");
 scanf("%d",&radius);
 area_peri(radius,&area,&perimeter);
 printf("Area=%f\n",area);
 printf("Perimeter=%f\n",perimeter);
 return 0;
}
void area_peri(int r,float *a,float *p)
{
*a=3.14*r*r;
*p=2*3.14*r;
}