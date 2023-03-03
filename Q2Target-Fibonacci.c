#include <stdio.h>

int fibonacci(int num){
	
	if(num == 0){
		return 0;
	}else if(num == 1){
		return 1;
	}else {
		return fibonacci(num-1) + fibonacci(num-2);
	}
	
}

int main(){
	
	int num;
	int i = 0;
	
	printf("Insira um numero, sera feita a verificacao para saber se ele pertence ou nao a sequencia de fibonacci:\n");
	scanf("%d", &num);

	if(num < 0){
		printf("Numeros negativos nao pertencem a sequencia de fibonacci.\n");
	}else{
		while(fibonacci(i) < num){
			i++;
		}

		if(fibonacci(i) == num){
			printf("O numero %d pertence a sequencia de fibonacci e eh o %i esimo numero da sequencia\n", num, i);
		}else{
			printf("O numero %d nao pertence a sequencia de fibonacci\n", num);
		}
	}
}
