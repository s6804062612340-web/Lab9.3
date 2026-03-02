#include <stdio.h>
#define MAX 50
int countVowel(char [ ],int vowel[5]);

void main() {
    char text[MAX];
    int vowel[5]={0,0,0,0,0};
    char ch[]="AEIOU";
    int cVowel;
    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text,vowel);
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    for(int i = 0 ;i<5;i++){
        printf("[%c]  : %d \n",ch[i],vowel[i]);
    }
}
int countVowel(char t[],int vowel[5]) {
    int i=0, count=0;
    while (i<MAX && t[i]!='\0') {
    if (t[i]=='A' || t[i]=='a'){
        count++;
        vowel[0]++;
    }
    else if (t[i]=='E' || t[i]=='e' ){
        count++;
        vowel[1]++;
    }
    else if (t[i]=='I' || t[i]=='i' ){
        count++;
        vowel[2]++;
    }
    else if (t[i]=='O' || t[i]=='o' ){
        count++;
        vowel[3]++;
    }
    else if (t[i]=='U' || t[i]=='u'){
        count++;
        vowel[4]++;
    }     
        i++;
    }
        return(count);
}
