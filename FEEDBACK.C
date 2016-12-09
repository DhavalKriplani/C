#include<stdio.h>
#include<conio.h>

void var(int *a, int *b, int *c, int *d, int *e, int rate);
void main()
{
int rate,rollno,j;
int avgA1=0,avgA2=0;
int A,B,C,D,E;
int a1[10],b1[10],c1[10],d1[10],e1[10],a2[10],b2[10],c2[10],d2[10],e2[10];
float avgf1=0,avgf2=0;
char a[30]="1 MR VIREN SARVAIYA-Physics";
char b[35]="2 MR DEEPAKSINGH RAJPUT-Chemistry";
clrscr();
	printf("Welcome to the feedback system of XYZ university!!!");
	printf("\nHow many feedback forms are to be inserted? - ");
	scanf("%d",&j);

	for(rollno=0;rollno<j;rollno++)
	{
		A=0;B=0;C=0;D=0;E=0;
		printf("\nFor teacher %s",a);
		printf("\nRate every questions answer in 1-5, where 5 is best");
		printf("\nQ1:Is teacher able to make concepts clear?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ2:Is teacher able to generate innovative ideas in your mind?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ3:Does teacher assigns work regularly?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ4:Does teacher teach according to the course plan?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ5:Is teacher punctual and regular?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);

		a1[rollno]=A;
		b1[rollno]=B;
		c1[rollno]=C;
		d1[rollno]=D;
		e1[rollno]=E;
	}
	for(rollno=0;rollno<j;rollno++)
	{
		A=0;B=0;C=0;D=0;E=0;
		printf("\nFor teacher %s",b);
		printf("\nRate every questions answer in 1-5 where 5 is best");
		printf("\nQ1:Is teacher able to make concepts clear?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ2:Is teacher able to generate innovative ideas in your mind?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ3:Does teacher assigns work regularly?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ4:Does teacher teach according to the course plan?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);
		printf("\nQ5:Is teacher punctual and regular?");
		printf("\nrate - ");
		scanf("%d",&rate);
		var(&A,&B,&C,&D,&E,rate);

		a2[rollno]=A;
		b2[rollno]=B;
		c2[rollno]=C;
		d2[rollno]=D;
		e2[rollno]=E;
	}
for(rollno=0;rollno<j;rollno++)
{
avgA1+=(5*a1[rollno])+(4*b1[rollno])+(3*c1[rollno])+(2*d1[rollno])+(1*e1[rollno]);
avgA2+=(5*a2[rollno])+(4*b2[rollno])+(3*c2[rollno])+(2*d2[rollno])+(1*e2[rollno]);
}
avgf1=(float)avgA1/(float)(5*j);
avgf2=(float)avgA2/(float)(5*j);

printf("\nTime for result of feedback!");
printf("\nFinal AVERAGE for MR VIREN SARVAIYA = %.2f",avgf1);
printf("\nFinal AVERAGE for MR DEEPAKSINGH RAJPUT = %.2f",avgf2);
printf("\n\nThanks from XYZ university!!");
getch();
}

void var(int *a, int *b, int *c, int *d, int *e, int rate)
{
if(rate==5)
	*a=*a+1;
else if(rate==4)
	*b=*b+1;
else if(rate==3)
	*c=*c+1;
else if(rate==2)
	*d=*d+1;
else if(rate==1)
	*e=*e+1;
}