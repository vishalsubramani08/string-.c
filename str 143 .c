#include <stdio.h>
#include <string.h>
int main() {
    char s[50],ch;
    int count=0;
    scanf("%s %c",s,&ch);
    for(int i=0;i<strlen(s);i++){
    printf("%s",s[i]);
    }
    return 0;
}
