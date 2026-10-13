#include <stdio.h>
#include <stdlib.h>


int main(){

    int ZAHL = rand();  // Variablen anlegen
    int raten;    
    printf("%d \n" ,ZAHL);

    for(int i = 0; i < 10; i++){    // For Schleife mit 10 Versuchen
        printf("Gib eine Zahl ein, um die Zahl zu eraten. ");
        scanf("%d", &raten);

        if (raten == ZAHL)  // Zahl erraten
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
    }

    return 0;

}