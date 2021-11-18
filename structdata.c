#include <stdio.h>
struct student
{
    char name[50];
    char branch[20];
    float cgpa;
};
int student_count()
{
    int count;
    printf("enter how many students input want to take");
    scanf("%d",&count);
    return count;
}
struct student input_data(struct student *data,int count)
{
    int i;
    for(i=0;i<count;i++)
    {
        printf("enter name %d student\n",i);
        scanf("%s",data[i].name);
        printf("enter branch %d student\n",i);
        scanf("%s",data[i].branch);
        printf("enter cgpa %d student\n",i);
        scanf("%f",&data[i].cgpa);
    }
}
void print(struct student *data,int count)
{
  int i;
  for(i=0;i<count;i++)
  {
      printf("%s\n",data[i].name);
      printf("%s\n",data[i].branch);
      printf("%f\n",data[i].cgpa);
  }
}
int main()
{
    int count;
    count=student_count(); printf("\n%d  ",count);
    struct student data[count];
    input_data(data,count);
    print(data,count);
    
}
