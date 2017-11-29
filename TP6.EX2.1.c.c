#include<stdio.h>
#include<string.h>
void conjuger(char verbe[]);
void main ()
{char verbe[50];

    do {printf("saisir un verbe : ");
	gets(verbe);}
	while((verbe[(strlen(verbe)-2)]!='e')||verbe[(strlen(verbe)-1)]!='r');
		    verbe[strlen(verbe)-2]='\0';
       conjuger(verbe);
	}


void conjuger(char verbe[])
{
    printf("je %se \n",verbe);
	printf("tu %ses \n",verbe);
	printf("il %se \n",verbe);
	printf("nous %sons \n",verbe);
	printf("vous %sez \n",verbe);
	printf("ils %sent \n",verbe);
}


