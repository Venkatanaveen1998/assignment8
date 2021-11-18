#include<stdio.h>
int main()
{
        FILE *fptr;
        char filename[20],ch;
        printf("enter which file data want to read and print \n");
        scanf("%s",filename);
        fptr=fopen(filename,"r");
        if(fptr==NULL) printf("there is no file present\n");
        else
        {
                while((ch=fgetc(fptr))!=EOF)
                        printf("%c",ch);
        }
}
