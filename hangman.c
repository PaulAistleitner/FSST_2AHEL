#include <stdio.h>

int main()
{

    const char secret[] = "12413744";
    char guess;
    
    printf("Gib einen Buchstaben ein: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe!");
        return 1;
    }

    int hits = 0;
    for (int i = 0; i < sizeof(secret) - 1; i++)
    {
        if (secret[i] == guess)
        {
            hits++;
        }
    }
    printf("%d Buchstaben richtig" ,hits);

    return 0;
}