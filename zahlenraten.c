#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));  // Standardwert fuer rand() festlegen, anhand der aktuellen Zeit
    int ZAHL = rand() %50 +1;  // Variablen anlegen
    int raten;

    for(int i = 0; i < 10; i++)    // For Schleife mit 10 Versuchen
    {
        printf("Gib eine Zahl ein, um die Zahl zu eraten. ");
        scanf("%d", &raten);

        if (raten == -1)
        {
            printf("Zahl: %d \n" ,ZAHL);
        }           

        else if (raten == ZAHL)  // Zahl erraten
        {
            printf("Du hast die Zahl eraten!");
            i = 10;
        }
        
        else if (raten < ZAHL)  // Zahl zu klein
        {
            printf("Zu klein. Probiere eine groessere Zahl \n");
        }

        else if (raten > ZAHL)  // Zahl zu gross
        {
            printf("Zu gross. Probiere eine kleinere Zahl \n");
        }

        else
        {
            printf("Eingabe ungueltig. Eingabe: %d ,Zahl: %d \n" ,raten ,ZAHL);
        }     
    }

    return 0;

}