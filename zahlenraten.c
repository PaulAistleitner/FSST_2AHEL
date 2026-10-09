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

        printf("Zu klein.");
    }

    if (raten > ZAHL)
    {

        printf("Zu gross.");
    }
    return 0;


}