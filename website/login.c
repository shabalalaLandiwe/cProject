#include <stdio.h>
// import the string module
#include <string.h>  

// declaring variables
// structure of login details
typedef struct{
    char name[50];
    char surname[50];
    char username[50];
    char password[50];
}

Register;

int login(const char* username, const char*password, Register user ) {
    //  if statement compares the user input to the stored credentials
    if (strcmp(username, user.username) == 0 && strcmp(password, user.password)){
        return 1;
    }
    return 0;
    
}

int main(){
    Register user = {"Landiwe", "Nkosi", "landiwe123", "securePass"};
    
    if(login( "landiwe123", "SecurePass", user)){
        printf("Login successfully!\n");
    }else{
        printf("Login failed\n");
    }

    return 0;
}