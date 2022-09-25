/*Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)
*/
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter A String:\n");
    fgets(str,20,stdin);
    isalphanumeric(str);
    return 0;
}
void isalphanumeric(char x[])
{
    int a=0,d=0,i;
    for(i=0;x[i];i++)
    {
        if(x[i]>='a' && x[i]<='z' || x[i]>='A'&& x[i]<='Z')
            a=1;
        if(x[i]>='0'&& x[i]<='9')
            d=1;
    }
    if(a==1 && d==1)
        printf("Given String Is Alphanumeric");
    else
        printf("Not A a Alphanumeric");
}
