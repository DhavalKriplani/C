#include<stdio.h>
#include<conio.h>
void main()
{
char i;
clrscr();
printf("Press any key... ");
i=getchar();
	if(i>=48 && i<=57)
	{
	printf("number");
	}
	else if((i>=65 && i<=90) || (i>=97 && i<=122))
	{
	printf("alphabets");
	}
	else if((i>=33 && i<=47) || (i>=58 && i<=64) || (i>=91 && i<=96) || (i>=123 && i<=126))
	{
	printf("symbols");
	}
	else
	{
	printf("control characters");
	}
getch();
}