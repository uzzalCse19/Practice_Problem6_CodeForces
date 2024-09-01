#include<stdio.h>
#include<string.h>
int main()
{

    char s1[100001],s2[100001],chek=0;
    scanf("%s%s",s1,s2);
    int a=strlen(s1),b=strlen(s2);
    printf("%d %d\n",a,b);
    printf("%s%s\n",s1,s2);
    char temp;
    temp=s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    printf("%s %s\n",s1,s2);
    return 0;
}