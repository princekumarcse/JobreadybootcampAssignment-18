//2. Write a function to reverse a string.
#include<stdio.h>
void reverseString(char a[]);
int main()
{
    char str[20];
    printf("Enter A string:\n");
    fgets(str,20,stdin);
    reverseString(str);
    return 0;
}
void reverseString(char a[])
{
    printf("%s",strrev(a));
}
