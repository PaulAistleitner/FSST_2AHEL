#include <stdio.h>

int main(){

    int ZAHL = 15;
    int raten;
    int erraten = 0;

    while(erraten == 0){
        printf("Gib eine Zahl ein, um die Zahl zu eraten. ");
        scanf("%d", &raten);
        if (raten == ZAHL)
        {

            printf("Du hast die Zahl eraten!");
            erraten = 1;

        }
        
        if (raten < ZAHL)
        {

            printf("Zu klein. Probiere eine groessere Zahl \n");
        }

        if (raten > ZAHL)
        {

            printf("Zu gross. Probiere eine kleinere Zahl \n");
        }
    }
    return 0;


}