// in this program we have to find out how can we turn a word into a palindrome by adding only a single letter to it.
//we also have to find out weather it is possible to do so and if it is, then how many palindromes can be formed
//I found this on Devskill easy contest, probably 5 or 6 no problem
// solved by: Ali Akber (ali853609@gmail.com)
//date: 14.11.2016


#include<stdio.h>
#include<string.h>

void inserting(char a[], int x, int y)
{
    int n=y,j=strlen(a);

    for(int i=j; j>=n; j--)
    {
        a[j+1]=a[j];
    }

    a[n]=char(x);
}

int main()
{
    char s[1000],t[1000], u[1000],l;

    int i, j ,k,q=0;

    gets(s);

    strcpy(u,s);

    for(i=97; i<=122; i++)
    {
        for(j=0; j<=strlen(s); j++)
        {
            inserting(u,i,j);
            strcpy(t,u);
            strrev(t);
            if(!strcmp(u,t))
            {
                printf("The string '%s' will be a palindrome if %c is added at position %d\nthe palindrome will be '%s'\n", s, i, j, u);
                q++;
            }
            strcpy(u,s);
        }
    }
        printf("\nThe string can be turned into %d palindromes\n", q);


    return 0;
}
