#include <stdio.h>
#include <stdlib.h>

int main(){

    int ZAHL = rand();
    printf("%d" ,ZAHL);
    int raten;
    

    for(int i = 0; i < 10; i++){
        printf("Gib eine Zahl ein, um die Zahl zu eraten. ");
        scanf("%d", &raten);
        if (raten == ZAHL)
        {

            printf("Du hast die Zahl eraten!");
            i = 10;

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