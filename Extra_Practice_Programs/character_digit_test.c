// The program requests the user to enter a character and displays a message on the screen telling the user whether the character is an alphabet or digit, or any other special character.

// Displaying the use of <ctype.h> header file; isalpha(variable_name) and isdigit(variable_name) functions

#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("Press any key\n");
    char character = getchar();
    if (isalpha(character) > 0) // Tests for a letter
    {
        printf("Entered key is a letter");
    }
    else if (isdigit(character)) // Tests for a digit
    {
        printf("Entered key is a digit");
    }
    else
    {
        printf("Key is not alphanumeric");
    }
}

// =======================================
// List of other Character Test funtions:

// isalnum(variable_name) : Checks for an alphanumeric character
// islower(variable_name) : Checks for a lower case character
// isupper(variable_name) : Checks for a upper case character
// isprint(variable_name) : Is variable a printable character?
// ispunct(variable_name) : Is variable a punctuation mark?
// isspace(variable_name) : Is variable a white space character?
//