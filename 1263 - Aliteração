#include <stdio.h>
#include <ctype.h>

#define TAM 5052 //TAMANHO DA STRING

int main(){
    char lN,// VARIÁVEL QUE CONTÉM A NOVA LETRA INICIAL DA PALAVRA
         lV,// VARIÁVEL QUE CONTÉM A ANTIGA LETRA INICIAL DA PALAVRA
         seq[TAM],//STRING CONTENDO A FRASE
         letra;//VARIÁVEL AUXILIAR

    int contador,//CONTADOR
        i;//ÍNDICE

    while(fgets(seq, TAM, stdin)){
        contador = 0;
        lN = seq[0];
        lV = lN + 1;
        i = 0;

        while(seq[i] != '\0' && seq[i] != '\n'){
            if(seq[i] == ' '){
                i++;

                letra = seq[i];
                    if(toupper(lV) != toupper(lN) && toupper(lN) == toupper(letra)){
                        lV = lN;
                        contador++;
                    }
                    else{
                        lV = lN;
                        lN = letra;
                    }
            }
            
            i++;
        }

        printf("%d\n", contador);
    }

    return 0;
}
