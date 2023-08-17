// Reading of strings using %wc and %ws...  Here wc=width character & ws=width string,

// Also included the use of %[^\n] basically the circumflex operator to over the issue of blank space in string inputs.

// %s terminates reading at the encounter of a blank space. So, if any string input with space needed to be entered then just add the '-' in between.
// Additionally, the address of a char variable does not require the ampersand sign to read the data.

#include <stdio.h>

main()
{
    int num;
    char name1[15], name2[15], name3[15];
    printf("Enter the serial no and name one\n");
    scanf("%d %[a-z]", &num, name1); // %[a-z] to add the restriction on an input which will only accept the string from the alphabets a-z.
    printf("%d %15s\n\n", num, name1);
    scanf("%[^\n]", name1); // This is added to accept any whitespace in a string and continue the program smoothly
    printf("Enter the serial no and name two\n");
    scanf("%d %s", &num, name2);
    printf("%d %15s\n\n", num, name2);
    scanf("%[^\n]", name2); // This is added to accept any whitespace in a string and continue the program smoothly
    printf("Enter the serial no and name three\n");
    scanf("%d  %15s", &num, name3);
    printf("%d %15s\n\n", num, name3);
    scanf("%[^\n]", name3); // This is added to accept any whitespace in a string and continue the program smoothly
}
