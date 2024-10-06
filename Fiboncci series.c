#include <stdio.h>
int main()
{
    int a=0,b=1,n,c,i;
    printf("%d",a);
    printf("%d",b);
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }
}
