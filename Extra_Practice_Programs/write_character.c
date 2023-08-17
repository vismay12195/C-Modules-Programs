// Program reads a character entered from keyboard and then prints it in the reverse case. That means, if the input is upper case , the output will be lower case.

// Displaying the use of putchar(variable_name) to write the character. Additionally, tolower(), toupper() and islower() functions of <ctype.h> header file

#include <stdio.h>
#include <ctype.h>

main()
{
    printf("Enter the character: ");
    putchar('\n'); // move to the next line
    char alphabet = getchar();
    if (islower(alphabet))
    {
        putchar(toupper(alphabet)); // converting to uppercase character and writing it at the terminal
    }
    else
    {
        putchar(tolower(alphabet)); // converting to lowercase character and writing it at the terminal
    }
}