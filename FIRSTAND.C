#include<stdio.h>
#include<conio.h>
void main()
{
long first=0,num=0,last=0,next=0;
clrscr();
	printf("Enter The Number ");
	scanf("%d",&num);
	printf("\n");
	last =num;
	while(num>=10)
	{
		num=num/10;
	}
	first = num;
		printf("The First Digit Is %d \n",first);

	last = last%10;
		printf("The Last Digit Is %d \n",last);

      next = last;
      last=first;
      first = next;

      printf("The first digit now %d \n",first);
      printf("The Last Digit now %d \n",last);
getch();
}