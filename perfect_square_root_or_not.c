#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            printf("True");
            x++;
            break;
        }
    }
    if(x==0)
    printf("False");
}