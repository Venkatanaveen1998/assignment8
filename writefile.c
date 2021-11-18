#include<stdio.h>
int main()
{
        FILE *fptr;
        char ch,filename[20];
        printf("enter new file for writing the data");
        scanf("%s",filename);
        fptr=fopen(filename,"w");
        printf("enter the data");
        while((ch=getchar())!=EOF)
                fputc(ch,fptr);
        fclose(fptr);


        if((fptr=fopen(filename,"r"))==NULL)
                printf("no data exists");
        else
        {
                printf("data is present");
                while((ch=fgetc(fptr))!=EOF)
                        printf("%c",ch);
        }
        fclose(fptr);
}
