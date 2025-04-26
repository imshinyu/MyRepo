#include <stdio.h>
#include <string.h>
void blabla(char str1[],char str2[]){
    int i=0,j=0;
    while(str1[i]!='\0')
    i++;
    while (str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
}
int main(){
    char str1[100]="Toto";
    char str2[100]="Loulou";
    char *str3;
    blabla(str1,str2);
    printf("blabla = %s\n",str1);
    str3=strchr(str2,'o');
    printf("%s ,%d",str3,str3-str2);
}
