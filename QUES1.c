//unique hashcode for a given string
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void hash(char *s){
    
    for (int c=0;c<strlen(s);c++) {
        printf("%d",toascii(s[c]));
    }    
     
}
int main()
{
    char s[1000];
    printf("Enter the String\n");
    scanf("%[^\n]s",s);
    hash(s);
}
