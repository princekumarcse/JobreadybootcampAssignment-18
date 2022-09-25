//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter A String:");
    fgets(str,20,stdin);
    int result=ispalindrome(str);
    if(result==1)
        printf("Given Striing is Palindrome:");
    else
        printf("Not Palindreome");
    return 0;
}
int ispalindrome(char x[])
{
    int i,len;
    len=strlen(x);
    for(i=0;i<len/2;i++)
    {
        if(x[i]!=x[len-i-1])
            return (0);
    }
    return 1;
}
