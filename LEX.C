#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main()
{
char *a,*b,*d,c[20][20],key[20][20]={"\0"},op[20][20]={"\0"},del[20][20]={"\0"},ide[20][20]={"\0"},/*out[20][20]={"\0"},*/con[20][20]={"\0"},lit[20][50];
char keyword[32][9]={"int","long","register","return","short","signed","sizeof","static","auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","struct","switch","typedef","union","unsigned","void","volatile","while"};
int i,j,k=0,f=1,m,liti=0,litj=0,opi=0,opj=0,deli=0,delj=0,keyi=0,idei=0,/*outi=0,*/dot=0,coni=0,conj=0;
clrscr();

printf("Enter the tokens: ");		//Tokens are taken from user
gets(a);
strcpy(d,a);
for(i=0;i<strlen(a);i++)		//Check for operators and delimeters
{
	if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='%'||a[i]=='!'||a[i]=='~'||a[i]=='&'||a[i]=='|'||a[i]=='<'||a[i]=='>'||a[i]=='='||a[i]=='^'||a[i]=='\\')
	{
		op[opi][opj++]=a[i];
		if(opj>=20)
		{
			opi++;opj=0;
		}
	}
	else if(a[i]=='\"')            //Check for literals
	{
		i++;
		while(a[i]!='\"')
		{
			lit[liti][litj++]=a[i];
			i++;
		}
		liti++;
	}
	else if(a[i]=='.'||a[i]==','||a[i]==':'||a[i]==';'||a[i]=='`'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='('||a[i]==')'||a[i]=='_'||a[i]=='{'||a[i]=='}'||a[i]=='['||a[i]==']'||a[i]=='\''||a[i]=='<'||a[i]=='>'||a[i]=='?')
	{
		del[deli][delj++]=a[i];
		if(delj>=20)
		{
			deli++;delj=0;
		}
	}
}

b = strtok(a, " ,-\\()<>{}:\'?/|&;!=@#%^*+`~");	//String divided into parts
while(*b!=NULL)
{
	strcpy(c[k++],b);
	b = strtok(NULL, " ,-\\()<>{}:\'?/|&;!=@#%^*+`~");
}

for(i=0;i<k;i++)
{
	f=1;
	for(j=0;j<32;j++)		//Check for keywords
	{
		if((strcmpi(c[i],keyword[j]))==0 && strncmpi(c[i],keyword[j],strlen(c[i]))==0)
		{
			strcpy(key[keyi++],c[i]);
			f=0;
		}
	}

	for(j=0;j<strlen(c[i]);j++)	//Check for constants
	{
		if(isdigit(c[i][j]) && dot<=1)
		{
			con[coni][conj++]=c[i][j];
		}
		else if(c[i][j]=='.' && dot<=1)
		{
			dot++;
			con[coni][conj++]=c[i][j];
		}
		else
		{
			for(m=0;m<strlen(c[i]);m++)
				con[coni][m]='\0';
			coni--;
			break;
		}
	}
	coni++;conj=0;dot=0;

	if(f==1)            		//Check for identifiers
	{
		if(strlen(c[i])<=8)
		{
			if(c[i][0]=='_' || isalpha(c[i][0]))
			{
				for(j=1;j<strlen(c[i]);j++)
				{
					if(isalnum(c[i][j]) || c[i][j]=='_'){}
					//else
					//	goto lbl;
				}
				strcpy(ide[idei++],c[i]);
			}
		       //	else
		       //		goto lbl;
		}
		//else
		//{
		//	lbl:
		//	strcpy(out[outi++],c[i]);
		//}
	}
}

printf("\nKeywords are:\n");		//Printing process
for(i=0;i<=keyi;i++)
{
	printf("%s\n",key[i]);
}

printf("\nIdentifiers are:\n");
for(i=0;i<=idei;i++)
{
	printf("%s\n",ide[i]);
}

printf("\nConstants are:\n");
for(i=0;i<=coni;i++)
{
	for(j=0;j<20;j++)
	{
		printf("%c",con[i][j]);
	}
	printf("\n");
}

printf("\nOperators are:\n");
for(i=0;i<=opi;i++)
{
	for(j=0;j<opj;j++)
		printf("%c\n",op[i][j]);
}

printf("\nDelimeters are:\n");
for(i=0;i<=deli;i++)
{
	for(j=0;j<delj;j++)
		printf("%c\n",del[i][j]);
}

printf("\nLiterals are:\n");
for(i=0;i<liti;i++)
{
	puts(lit[i]);
}

/*printf("\nInvalids are:\n");
for(i=0;i<=outi;i++)
{
	printf("%s\n",out[i]);
}*/
getch();
}
