#include <stdio.h>
int sum=0,a;
int reverse(int n)
{
    int a;
    if(n)
    {
       a=n%10;
       sum=sum*10+a;
       n=reverse(n/10);
    }
    else 
    return sum;
}
int main()
{
    int n=234,a;
    a=reverse(n); 
    printf("%d \n",a);
}

