//5. Write a function to transform a string into lowercase
void LowerCase(char x[]);
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter A string:\n");
    fgets(str,20,stdin);
    LowerCase(str);
    return 0;
}
void LowerCase(char x[])
{
    printf("%s",strlwr(x));
}
