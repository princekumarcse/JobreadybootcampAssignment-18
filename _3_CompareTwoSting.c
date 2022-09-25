//3. Write a function to compare two strings.
#include<stdio.h>
int compare(char x[],char y[]);
int main()
{
    char a[10],b[20];
    printf("Enter First String:\n");
    fgets(a,10,stdin);
    printf("Enter Second String:\n");
    fgets(b,20,stdin);
    int result=compare(a,b);
      if(result==0)
    {
        printf("Strings Are Same\n");
    }
    else
    {
        printf("Stringare Not same");
    }
     return 0;
}
int  compare(char x[],char y[])
{
    int z;
    z=strcmp(x,y);
    return z;

}
