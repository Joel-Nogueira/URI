#include <stdio.h>

int main(){
    int n = 0,//CASOS DE TESTE
        i, j, k;//ÍNDICES

    char s1[1001], s2[501];

    while(scanf("%s", &s1) != EOF){
        getchar();

        for(i = 0, j = 0; s1[i] != '\0' ; i++){
            if(s1[i] == '('){
                s2[j] = '(';
                k = j;
                j++;
            }
            else if(s1[i] == ')'){
                if(s2[k] == '('){
                    s2[k] = '\0';
                    k--;
                    j--;
                }
                else
                    break;
            }
        }

        if(s1[i] == '\0' && s2[0] == '\0')
            printf("correct\n");
        else
            printf("incorrect\n");


        s2[0] = '\0';
    }

    return 0;
}
