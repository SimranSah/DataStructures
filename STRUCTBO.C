#include<stdio.h>
#include<conio.h>
main()
{
   struct book
   {
	char name[20];
	float cost;
	int id;
	};

   struct book b1={'A',500.89,1};
   printf("Name: %c Cost : %f ID: %d ",&b1.name,b1.cost,b1.id);
   getch();
   return 0;
}
