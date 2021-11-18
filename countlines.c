#include<stdio.h>
int main()
{
        FILE *fptr;
        char ch,file[20];int character=0,word=0,line=0;
        printf("which file u want check \n");
        scanf("%s",file);
        fptr=fopen(file,"r");
        if(fptr==NULL) printf("no file found \n");
        else
        {
                while((ch=fgetc(fptr))!=EOF)
                {
                        if((ch==' ')||(ch=='\n'))
                        {
                                word++;
                                if(ch=='\n')
                                        line++;
                        }
                        else
                                character++;
                }
        }
        printf("%d ",character);
        printf("\n%d ",word);
        printf("\n%d ",line);
}
