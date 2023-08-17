// Use of getchar() function
// The program displays a question of YES/NO type to the user and reads the user's response in a single character(Y or N) If the response is Y then it will output something and otherwise for N as well there will be some output.

#include <stdio.h>

int main()
{
    printf("Would you like to know my name?\n");
    printf("Type Y for YES and N for NO: ");
    char answer = getchar(); // Reading a character
    if (answer == 'Y' || answer == 'y')
    {
        printf("\n\nMy name is Busy BEE\n");
    }
    else
    {
        printf("\n\nYou are good for nothing!\n");
    }
    return 0;
}