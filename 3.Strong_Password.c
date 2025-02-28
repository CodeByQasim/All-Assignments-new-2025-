#include <stdio.h>

int isStrongPassword(char password[]) {
    int hasUppercase = 0, hasLowercase = 0, hasDigit = 0;
    int length = 0,i;

    while (password[length] != '\0') {
        length++;
    }


    if (length < 8) {
        return 0; 
    }


    for ( i = 0; i < length; i++) {

        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUppercase = 1;
        }

        else if (password[i] >= 'a' && password[i] <= 'z') {
            hasLowercase = 1;
        }

        else if (password[i] >= '0' && password[i] <= '9') {
            hasDigit = 1;
        }
    }


    if (hasUppercase && hasLowercase && hasDigit) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char password[100];
    int i;
    while (1) {
        printf("Enter a password: ");
        scanf("%s", password);
        
        if (isStrongPassword(password)) {
            printf("Your password is strong.\n");
            break; 
        } else {
         
            printf("Password is not strong enough.\n");
            
            int length = 0;

            while (password[length] != '\0') {
                length++;
            }

            if (length < 8) {
                printf("- Password must be at least 8 characters long.\n");
            }
            int hasUppercase = 0, hasLowercase = 0, hasDigit = 0;
            for ( i = 0; i < length; i++) {
                if (password[i] >= 'A' && password[i] <= 'Z') {
                    hasUppercase = 1;
                } else if (password[i] >= 'a' && password[i] <= 'z') {
                    hasLowercase = 1;
                } else if (password[i] >= '0' && password[i] <= '9') {
                    hasDigit = 1;
                }
            }
            if (!hasUppercase) {
                printf("- Password must contain at least one uppercase letter.\n");
            }
            if (!hasLowercase) {
                printf("- Password must contain at least one lowercase letter.\n");
            }
            if (!hasDigit) {
                printf("- Password must contain at least one digit.\n");
            }
        }
    }
    
    return 0;
}

