#include <stdio.h>
int sumnatural_numbers(int n)
{
    if(n==1) return 1;
    else return n+sumnatural_numbers(n-1);
}
int main()
{
    int n=5,a;
    a=sumnatural_numbers(n); 
    printf("%d \n",a);
}

