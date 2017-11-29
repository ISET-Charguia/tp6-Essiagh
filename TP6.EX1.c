#include <stdio.h>
#include<string.h>
int estseparateur(char c)
{
	char *sep=", ; : ! ?.";
	if (strchr(sep,c) != NULL)
	{
		return 1 ;
	}
	return 0;
}

int nbrmot(char *text)
{
	int nb=0;int i=0;
	if (text!=NULL &&strlen (text)>0)
	{
		while (estseparateur (text[i]))
		{
           i++;
	    }
	for(;i<strlen(text);i++)
	{
		if(estseparateur(text[i])&& ! estseparateur(text[i-1]))
		{
			nb++ ;
		}
	}
	if (!estseparateur(text[strlen(text -1)]))
	{
		nb++;
	}
	return nb;
}
return 0;
}
void majus( char *ch)
{
    int i=1;
    ch[0]=ch[0]-32;
    while (ch[i]!='\0')
    {

        if (ch[i]==' ' || ch[i]==',' || ch[i]=='?' || ch[i]=='!' || ch[i]=='.' || ch[i]==';' || ch[i]==':' && (ch[i]>'a' && ch[i]<'z'))
        {

            i++;
            ch[i]=ch[i]-32;
        }
        i++;
    }
}
int main()
{   const int max=50;
	char ch[max];
	int nbr;
	printf("Taper une chaine");
	fgets(ch,sizeof(ch),stdin);
	nbr=nbrmot(ch);
	majus(ch);
	printf("Il y a %d mots",nbr+1);
	printf("\n%s",ch);
	return 0;
}
