#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char logindb[5][64], char passdb[5][64]); 

int main() {
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
    char inputlogin[64];
    char inputpass[64];
	//implement here
    printf("User:");
    scanf("%s",inputlogin);
    printf("Password:");
    scanf("%s",inputpass);
    if(checkLogin(inputlogin,inputpass,login,password))
        printf("Welcome");
    else printf("Incorrect login or password");
    return 0;
}

int checkLogin(char *login, char *passwd, char logindb[5][64], char passdb[5][64])  {
    for(int i=0;i<5;i++){
        if(strcmp(login,logindb[i])== 0 && strcmp(passwd,passdb[i])==0)
        return 1;
    }
    return 0;
} 
