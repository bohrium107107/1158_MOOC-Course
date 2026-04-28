#include <stdio.h>
#include <string.h>

int main() {
    
    // Declare a character type array
    char str[100];
    printf("Enter a string: ");
    gets(str);

    //Iterate over each element of the character array
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c is a vowel\n", str[i]);
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            printf("%c is a consonant\n", str[i]);
        }
    }
    return 0;
}
