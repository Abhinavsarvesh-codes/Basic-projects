#include<stdio.h>
int main(){
FILE *fp;
char ch;
fp=fopen("sample.txt","w");
if(fp==NULL){
    printf("Error in file handling !");
    return 1;
}
    fprintf(fp,"Hello world");
fclose(fp);
fp=fopen("sample.txt","r");
while((ch = getc(fp))!=EOF){
    printf("%c",ch);
}
    return 0;

}