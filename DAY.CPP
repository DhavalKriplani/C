//Program to find weekday from given date
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s1[3],s2[10],s3[5],s4[5],s5[10];
int a,b,c,d;
clrscr();
printf("Welcome! This program tells you the weekday of the date you enter!!");
again:
printf("\n\nEnter the date (e.g. 1 jan 2000) - ");
scanf("%s %s %s",s1,s2,s3);
strncpy(s4,s2,3);
s4[3]='\0';
strlwr(s4);

if(!strcmp(s4,"jan"))
b=1;
else if(!strcmp(s4,"feb"))
b=2;
else if(!strcmp(s4,"mar"))
b=3;
else if(!strcmp(s4,"apr"))
b=4;
else if(!strcmp(s4,"may"))
b=5;
else if(!strcmp(s4,"jun"))
b=6;
else if(!strcmp(s4,"jul"))
b=7;
else if(!strcmp(s4,"aug"))
b=8;
else if(!strcmp(s4,"sep"))
b=9;
else if(!strcmp(s4,"oct"))
b=10;
else if(!strcmp(s4,"nov"))
b=11;
else if(!strcmp(s4,"dec"))
b=12;

//converting string value to integer value
a=atoi(s1);
c=atoi(s3);

//Zeller's Formula to find weekdays
a+=b<3?c--:c-2;
d=(23*b/9+a+4+c/4-c/100+c/400)%7;

if(d==0)
strcpy(s5,"Sunday");
else if(d==1)
strcpy(s5,"Monday");
else if(d==2)
strcpy(s5,"Tuesday");
else if(d==3)
strcpy(s5,"Wednesday");
else if(d==4)
strcpy(s5,"Thursday");
else if(d==5)
strcpy(s5,"Friday");
else if(d==6)
strcpy(s5,"Saturday");

printf("\nIt's %s!",s5);
printf("\n\nWanna see another day? (y/n)");
	if(getch()=='y')
	{
	goto again;
	}
	else
	{
	printf("\n\nHave a nice day!!!");
	exit(0);
	}
getch();
}