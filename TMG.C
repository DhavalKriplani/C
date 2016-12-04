#include<stdio.h>
#include<conio.h>
void main()
{
again:
char i,j=21,y;
clrscr();
printf("\t\t\t    ===================== \n");
printf("\t\t\t  || THE MATCHSTICK GAME ||\n");
printf("\t\t\t    =====================\n");
printf("\nThere are 21 matchsticks.");
printf("\n\niiiiiiiiiiiiiiiiiiiii");
printf("\n\nThe user first picks up the matchstick(s) and then the computer.");
printf("\nThe one who forces the other one to pick up the last matchstick(s) wins.");
printf("\nThe user can pick 1, 2, 3 or 4 matchstick(s) at a time.");
printf("\nWrite numbers (1, 2, 3 or 4) to indicate your choice.\n\n");

while(j>1)
{
lbl:
printf("\nYour turn:\n");
i=getchar();
flushall();
	if(i<49 || i>52)
	{
	printf("Please enter your choice by 1, 2, 3 or 4.");
	goto lbl;
	}
	else
	{
	printf("Computer:\n");
	printf("%d\n",53-i);
	}
j-=5;
}

printf("Computer wins!!");
printf("\n\nWanna play again?? (y/n)");
	if(getch()=='y')
	{
	goto again;
	}
	else
	{
	printf("\n\nHave a nice day!!!");
	}
getch();
}
