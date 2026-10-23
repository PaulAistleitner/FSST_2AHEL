#include <stdio.h>

int main()
{

    //Variablen anlegen
    const char secret[] = "REDBULL4EVER";
    const int len = sizeof(secret) -1;
    char guessed[len];
    char guess;
    int hits = 0; 

    //Variable initialisieren: _______
    for (int i = 0; i < len; i += 2)
    {
        guessed[i] = '_';
    }

    //Einleselogik
    printf("%c" ,guessed);
    printf("Gib einen Buchstaben ein: ");
    if (scanf(" %c", &guess) != 1)
    {
        printf("Ungültige Eingabe!");
        return 1;
    }

    //Vergleich
    for (int i = 0; i < len; i++)
    {
        if (secret[i] == guess)
        {
            hits++;
            guessed[i] = guess;
        }
    }

    //Ausgabe
    printf("%d Buchstaben richtig\n" ,hits);
    for (int i = 0; i < len; i++)
    {
        printf("%c" ,guessed[i]);
        printf(" ");
    }

    return 0;
}