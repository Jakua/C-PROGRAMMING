#include<stdio.h>
char small_to_capital()
{
    char ch;
    if(ch>='a'|| ch<='z')
    {
        scanf("%c",&ch);
    }
    return ch;
}
int main()
{
    int d=small_to_capital();
    printf("%c",d-32);
    return 0;
}