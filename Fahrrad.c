#include <stdio.h>

float berechnen(float hours, float bike)
{
    float betrag = -1;
    betrag = hours*bike;
    if (hours >= 5)
    {
        betrag = betrag * 0.9;
    }

    return betrag;
}

int main()
{
    int is_running = 1;
    while (is_running == 1)
    {
        int bike = -1;
        printf("(1) Citybike 5Euro, (2) Mountainbike 8Euro, (3) E-Bike 12Euro \n ");
        int menu;
        scanf("%d", &menu);

        if (menu == 1)
        {
            bike = 5;
        }
        else if (menu == 2)
        {
            bike = 8;
        }
        else if (menu == 3)
        {
            bike = 12;
        }
        else
        {
            printf("Usage Error: Bike has to be 1, 2 or 3!");
            return -1;
        }

        float hours = -1;
        printf("\nWie viele Stunden? \n");
        scanf("%f", &hours);
        if (hours <= 0)
        {
            printf("Error: Stundenanzahl < 0");
            return -1;
        }

        float betrag = berechnen(hours, bike);
        printf("Der Kunde muss %.2fEuro bezahlen\n", betrag);
        printf("\n(1) Erneut berechnen, (2) Beenden \n");
        scanf("%d", &is_running);
    }
    return 0;
}