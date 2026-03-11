#include <stdio.h>
#include <string.h>
int main() {
    int count=0;
    char s[50];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z'){
            count++;
        }
    }
    if(count==0){
        printf("Invalid");
    }
    else{
        printf("Valid");
    }

    return 0;
}
