#include <stdio.h>

int main()
{

    const char secret = 'X';
    char guess;
    
    printf("Gib einen Buchstaben ein: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe!");
        return 1;
    }
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