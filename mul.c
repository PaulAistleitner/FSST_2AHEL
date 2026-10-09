#include <stdio.h>
#include <stdlib.h>

int main(){

    float lange;
    float breite;
    float flache;
    float umfang;
    int ruckgabe;
    int ruckgabe2;
    printf("Lange: ");
    ruckgabe2 = scanf("%f",&lange);
    if (ruckgabe2 == 0)
    {
        printf("Error: Eingabe inkorrekt.");
        exit(EXIT_FAILURE);

    }
    printf("Breite:");
    ruckgabe = scanf("%f",&breite);
    if(ruckgabe == 0)
        {
        printf("Error: Eingabe inkorrekt");
        exit(EXIT_FAILURE);

        }
    
        
    flache = lange * breite;
    umfang = (lange + breite)*2.0;
    printf("Flaeche: %0.2f, Umfang: %0.2f \n",flache ,umfang);
    printf("%d", ruckgabe);



}
