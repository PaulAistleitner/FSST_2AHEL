#include <stdio.h>

int main()
{

    const char secret = 'X';
    char guess;
    
    printf("Gib einen Buchstaben ein: ");
    scanf("%c", &guess);
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