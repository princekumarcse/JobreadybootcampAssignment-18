//Write a function to find the repeated character in a given string.
#include<stdio.h>
void checkrepeat(char x[]);
int main()
{
    char str[20];
    printf("Enter A String:\n");
    fgets(str,20,stdin);
    checkrepeat(str);
    return 0;
}
void checkrepeat(char x[])
{
    int i,len,j,count=0;
    char repeatedchar;
    len=strlen(x);
    for(i=0; x[i]; i++)
    {
        for(j=i+1; x[j]; j++)
        {
            if(x[i]==x[j])
            {
                repeatedchar=x[i];
                count=1;
                break;
            }
        }
        if(count==1)
        {
            break;
        }
    }

    printf("Reapeated Character of %s is: %c\n",x,repeatedchar);
}
