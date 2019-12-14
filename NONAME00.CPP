#include<stdio.h>
#include<conio.h>
main()
{
 char name[3];
 float price[3];
 float id[3];
 int i;
 clrscr();
 for(i=0;i<3;i++)
  {
	scanf("%c%d%d", name[i],&price,&id);
	}
 for(i=0;i<3;i++)
 {
	 printf(" %c is the name,%d is the price and %d is the id",name[i],price,id);
	 }
 getch();
 return 0;

}





