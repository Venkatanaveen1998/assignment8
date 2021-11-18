#include <stdio.h>
#include<stdlib.h>
struct alpha
{
   char alphabatic;  
};
int cnt=0,i=0;
struct alpha *ele=NULL;
void enter_data(char v)
{
    ele[cnt].alphabatic=v;
    cnt++;
}
void print()
{
    for(int i=0;i<cnt;i++)
    printf("%c \n",ele[i].alphabatic);
}
void ascending_order()
{
    int i,j; char temp;
    for(i=0;i<5;i++)
     for(j=i+1;j<5;j++)
     {
         if(ele[i].alphabatic>ele[j].alphabatic)
         {
             temp=ele[j].alphabatic;
             ele[j].alphabatic=ele[i].alphabatic;
              ele[i].alphabatic=temp;
         }
     }
}
int main()
{
    int n;
    printf("enter how many elements want insert\n");
    scanf("%d",&n);
   ele=malloc(n*sizeof(struct alpha));
    printf("%d\n",ele);
   enter_data('h');
    enter_data('e');
     enter_data('l');
      enter_data('l');
      enter_data('o');
      printf("before ascending order\n");
   print();
   ascending_order();
   printf("after ascending order\n");
   print();
}

