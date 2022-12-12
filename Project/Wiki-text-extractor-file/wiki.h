#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void wiki_remove_bracket(char a[])
{
    FILE * fp;
    FILE * fp_w;
    char ch;
    fp=fopen(a,"r");
    fp_w=fopen("out.txt","w");
    bool f=0;
    if(fp==NULL && fp_w==NULL)
        printf("File cannot be opened\n");
    else{
        while(ch!=EOF){
            ch=fgetc(fp);
            if(ch=='[')
                f=1;
            if(f==0){
                fputc(ch,fp_w);
            }
            if(ch==']')
                f=0;
        }
    }
    return;
}
