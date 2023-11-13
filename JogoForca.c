#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    char seg = 'n';
    int op;
    
    char animal[15][15];

    char letras[56] = {" a b c d e f g h i j k l m n o p q r s t u v w x y z "};

    char tentativas[50];

    int oportunidades = 6;

    time_t t;
    srand((unsigned) time(&t));

    FILE *fptr;

    printf("Jogo da Forca\n\n");
    printf("Acrescentar animais à lista - 1\n");
    printf("Jogar - 2\n");
    scanf("%d", &op);
    
    if(op == 1){
        fptr = fopen("C:\\Users\\forca.txt", "w");

        printf("Insira o animal a adicionar: \n");
        scanf("%s", &animal);

        printf("Animais na lista: ", animal);
        fprintf(fptr, "%s", animal);

        printf("Deseja acrescentar mais elementos? [s/n]\n");
        scanf("%c", &seg);
    } 

    while(seg == 's'){
        printf("Insira o animal a adicionar: \n");
        scanf("%s", &animal);

        printf("Animais na lista: ", animal);
        fprintf(fptr, "%s", animal);

        printf("Deseja acrescentar mais elementos? [s/n]\n");
        scanf("%c", &seg);
    }

    if(op == 2){
        fptr = fopen("C:\\Users\\C", "r");

        if(fptr == NULL){
            printf("Ficheiro não disponível.\n");
        }
    }

    fclose(fptr);
    return 0;

}