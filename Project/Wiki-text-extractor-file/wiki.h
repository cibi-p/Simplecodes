#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void wiki_remove_bracket(char a[])
{
    FILE * fp;
    char ch;
    fp=fopen(a,"r");
    bool f=0;
    if(fp==NULL)
        printf("File cannot be opened\n");
    else{
        while(ch!=EOF){
            ch=fgetc(fp);
            if(ch=='[')
                f=1;
            if(f==0){
                printf("%c",ch);
            }
            if(ch==']')
                f=0;
        }
    }
    return;
}
