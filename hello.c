#include <stdio.h>


int main(){
    char* name[50];
    printf("Wie heist du? \n");
    scanf("%[^\n]", &name);
    printf("Hallo %s!",name);


}

