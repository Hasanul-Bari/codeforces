#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,l;
    char s[101];
    scanf("%d ", &n);

    for(i=0; i<n; i++)
    {
        gets(s);
        l=strlen(s);

        if(l>10)
        {
            printf("%c%d%c\n", s[0],l-2,s[l-1]);
        }
        else
        {
            printf("%s\n",s);
        }



    }

    return 0;
}