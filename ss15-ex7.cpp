#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char gmailcuatoi[1000] = "Hello my gmail is phamngoclinhtq2006@gmail.com !!!";
    int letterCount = 0, digitCount = 0, specialCharCount = 0;
    for(int i = 0; i < strlen(gmailcuatoi); i++){
        if(isdigit(gmailcuatoi[i])){
            ++letterCount;
        }
        else if(isalpha(gmailcuatoi[i])){
            ++digitCount;
        }
        else{
            ++specialCharCount;
        }
    }    
    printf("So luong chu so : %d\n", letterCount);
    printf("So luong chu cai : %d\n", digitCount);
    printf("So luong ki tu dac biet : %d\n", specialCharCount);
    return 0;
}
