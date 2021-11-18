#include<stdio.h>
int main()
{
        FILE *f1,*f2;
        char file1[20],file2[20],ch1,ch2;int cnt=0;
        printf("enter 1st file\n");
        scanf("%s",file1);
        printf("enter 2nd file\n");
        scanf("%s",file2);
        f1=fopen(file1,"r");
        f2=fopen(file2,"r");
        if((f1==NULL)&&(f2==NULL))
                printf("files are not founded \n");
        else
                {
                        while(((ch1=fgetc(f1))!=EOF)&&((ch2=fgetc(f2))!=EOF))
                                if(ch1!=ch2) cnt++;
                }
        if(cnt>0) printf("both files are different\n");
        else printf("both are same\n");
}
