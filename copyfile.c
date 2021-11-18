#include<stdio.h>
int main()
{
        FILE *f1,*f2;
        char ch,file1[20],file2[20];int cnt=0;
        printf("enter which file data u want \n");
        scanf("%s",file1);
        printf("enter another file with which u want \n");
        scanf("%s",file2);
        f1=fopen(file1,"r");
        f2=fopen(file2,"w");
        if(f1==NULL) printf("no file is presented\n");
        else
        {
                while((ch=fgetc(f1))!=EOF)
                {
                        fputc(ch,f2);
                }
        }
}
