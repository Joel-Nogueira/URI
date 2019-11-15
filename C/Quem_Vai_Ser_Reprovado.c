#include <stdio.h>
#include <string.h>

int main(){
	int n,//QUANTIDADE DE ALUNOS
		tam_1, tam_2,//TAMANHO DOS NOMES
		p1 = 11, p2,//QUANTIDADE DE PROBLEMAS RESOLVIDOS
		i, k = 1;//ÍNDICES

	char nome_1[21], nome_2[21];//NOMES DOS ALUNOS

	while(scanf("%d", &n) != EOF){
		getchar();
		
		while(n > 0){
			scanf("%s", nome_2); 

			scanf("%d", &p2);
			getchar();

			if(p1 == p2 && strlen(nome_1) != 0 && strlen(nome_2) != 0){//EVITA COMPARAÇÃO DESNECESSÁRIA 
				for(i = 0; nome_1[i] != '\0' || nome_2[i] != '\0'; i++){
					if(nome_1[i] == nome_2[i])
						continue;
					else if(nome_1[i] > nome_2[i])
						break;
					else{
						strcpy(nome_1, nome_2);
						break;
					}
				}
			}

			else if(p2 < p1){
				strcpy(nome_1, nome_2);
				p1 = p2;
			}

			n--;
		}
		
		printf("Instancia %d\n%s\n", k, nome_1);
		k++;
		
		nome_1[0] = '\0';
		p1 = 11;
	}

	return 0;
}