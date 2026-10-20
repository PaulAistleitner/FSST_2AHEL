#include <stdio.h>

int main()
{

    const char secret = 'X';
    const char guess = 'Y';
    
    if (guess == secret)
    {
        printf("Treffer (%c)" ,guess);
    }
    else
    {
        printf("Fehler");
    }

    return 0;
}