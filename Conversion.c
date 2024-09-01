#include<stdio.h>
int main()
{

    char s[100001];
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==',') s[i]=' ';
        if(s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
        else if(s[i]>=97 && s[i]<=122) s[i]=s[i]-32;
        i++;
    }
    printf("%s\n",s);
}