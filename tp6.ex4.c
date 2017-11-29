/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include<ctype.h>
int main (void)
{char ch[200],ch1[200];
	int i;


	printf("saisir une chaine : ");
	fgets(ch,sizeof(ch),stdin);
    for (i=0;ch[i];i++)
	{if(isupper(ch[i]))
		ch1[i]=tolower(ch[i]);
		else ch1[i]=toupper(ch[i]);}
	printf("%s",ch1);


}
