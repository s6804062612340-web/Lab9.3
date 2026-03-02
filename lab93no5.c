#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char input[124];
    int sum=0;
    printf("Enter input:");
    scanf("%[^\n]s",input);
    int size = strlen(input);
    for(int i=0;i < size;i++){
        if(isdigit(input[i])){
            sum+= (input[i]-'0');
        }
    }
    printf("Sum of digit char: %d",sum);
}
