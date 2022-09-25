//1. Write a function to calculate length of the string
#include<stdio.h>
int lengthOfString(char a[]);
int main()
{
    char str[20];
    printf("Enter A String:");
    fgets(str,20,stdin);
    int l=lengthOfString(str);
    printf("Length Of String is %d",l-1);
    return 0;
}
int lengthOfString(char a[])
{
    return strlen(a);
}
