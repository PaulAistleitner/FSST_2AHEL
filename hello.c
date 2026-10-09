#include <stdio.h>


int main(){
    char* name[50];
    char* petar = "petar";
    printf("Wie heist du? \n");
    scanf("%[^\n]", &name);
    printf("Hallo %s!",name);


}

