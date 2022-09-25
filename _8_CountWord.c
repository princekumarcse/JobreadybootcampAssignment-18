//Write a function to count words in a given string
#include<stdio.h>
int main()
{
    char str[1000];
    printf("Enter A String:\n");
    fgets(str,1000,stdin);
    countWord(str);
    return 0;
}
void countWord(char x[])
{
    int count=0,i;
    for(i=0;x[i];i++)
    {
         if (x[i] == ' ' && x[i+1] != ' ')
            count++;
    }
    printf("Total Word = %d",count);
}
