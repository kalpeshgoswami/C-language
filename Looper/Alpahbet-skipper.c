#include <stdio.h>

int main()
{
    char alphabets = 'A';

    do
    {
        printf("%c\n", alphabets); // print current letter
        
        alphabets += 4;            // jump by 4 letters

    } while (alphabets <= 'Z');

    return 0;
}
