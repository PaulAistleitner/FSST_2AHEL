#include <stdio.h>

int main(){

    int ZAHL = 15;
    int raten;
    printf("Gib eine Zahl ein, um die Zahl zu eraten. ");
    scanf("%d", &raten);
    if (raten == ZAHL)
    {

        printf("Du hast die Zahl eraten!");

    }
    
    if (raten < ZAHL)
    {

        printf("Zu klein. Probiere eine groessere Zahl ");
    }

    if (raten > ZAHL)
    {

        printf("Zu gross. Probiere eine kleinere Zahl ");
    }
    return 0;


}