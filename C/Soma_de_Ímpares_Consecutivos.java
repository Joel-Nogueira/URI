import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException{
		int n,//CASOS DE TESTES
			x, y,//RANGE
			menor, maior, soma;
		
		Scanner entrada = new Scanner(System.in);
		
		n = entrada.nextInt();
		entrada.nextLine();
		
		for(int i = 0; i < n; i++){
			soma = 0;
			
			x = entrada.nextInt();
			y = entrada.nextInt();
			entrada.nextLine();
			
			maior = x;
			menor = y;
			
			if(y > x){
				maior = y;
				menor = x;
			}
			
			for(int j = menor + 1; j < maior;){
				 if(j % 2 != 0){
					 soma = soma + j;
					 j = j + 2;
				 }
				 else
					 j++;
			}
			
			System.out.println(soma);
		}
	}

}
