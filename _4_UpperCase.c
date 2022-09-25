//4. Write a function to transform string into uppercase
#include<stdio.h>
char upperCase(char a[]);
int main()
{
    char str[20];
    printf("Type Any String");
    fgets(str,20,stdin);
   upperCase(str);

    return 0;
}
char upperCase(char a[])
{
    printf("%s",strupr(a));
}
