#include <stdio.h>
#include <string.h>;

typedef struct{
    char name[50];
    char surname[50];
    char username[50];
    char password[50];
}

Register;

Register firstRegister(){
    Register user;
    printf("Enter your name:");
    fgets(user.name,sizeof(user.name), stdin);
    user.name[strcspn(user.name, "\n")] = '\0';

    printf("Enter your surname");
    fgets(user.surname, sizeof(user.surname), stdin);
    user.username[strcspn(user.surname,"\n")] = '\0';

    printf("Enter your password");
    fgets(user.password, sizeof(user.password), stdin);
    user.password[strcspn(user.password,"\n")] = '\0';

    return user
}


int main(){
    Register newUser = firstRegister();
    printf("Registration complete");
    printf("Welcome, %s %s!\n", newUser.name, newUser.surname);
    printf("Your Username is: %s\n, newUser.username");

    return 0;

}