# include <stdio.h>
int main(){
	int vet[5] = {-4, -2, -5, 1, 6,2,9};
	int i,k=2,sum,c,larg_sum=-2147483648,security_val=0; // larg_sum tem o seu valor definido a partir do menor número possível que uma variável int pode ter. Em Java é possível usar Integer.MIN_VALUE 
	int tamanho = sizeof(vet) / sizeof(vet[0]); // descobre o tamanho do vetor p/ qlqr tamanho de malha de redes
	
	for(i=1; i < tamanho ; i++) {
		sum = vet[i]; // começa a soma pelo primeiro elemento a cada incremento
		int c = i; // c será a variável de apoio  responsável por ser incrementada enquanto o laço while valer
		while (c < tamanho){ //o laço while é executado enquanto a soma de índices estiver no escopo do vetor
			if (c + k < tamanho) { // verifica se a soma da entrada (k) irá exceder o tamanho do vetor. Se positivo, o laço não é executado
                    sum += vet[c + k]; // faz a soma que será comparada para escolher a melhor entrada a partir do maior security_val
                }
                c += k; // incrementa c
            }
            if (sum > larg_sum) { // testa cada soma para definir a maior
                
                larg_sum = sum; // atribui a soma à variável de comparação, caso seja a maior até o momento
                security_val = vet[i]; // captura o security_val do indice que contem a maior soma
            }
		}
		 printf("A melhor posicao para iniciar e: %d ", security_val);
		 
	return 0;

    }
    



