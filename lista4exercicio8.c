#include <stdio.h>

void main(){
	float valor = 1, alimentacao = 0, limpeza = 0, higiene = 0;
	char codigo;

	while(valor != 0){
		printf("Digite o valor: \n");
		scanf("%f", &valor);
		if (valor <= 0){
		    break;
		}
		getchar();
		
		printf("Digite o codigo da mercadoria: \n");
		printf("l- limpeza a- alimentacao h- higiene\n");
		scanf("%c*c", &codigo);
		getchar();
		
		
		switch(codigo){
			case 'l':
				limpeza += valor;
				break;
			case 'a':
				alimentacao += valor;
				break;
			case 'h':
				higiene += valor;
				break;
		}
	}
	printf("\nTotal de gasto alimentacao: %.2f R$", alimentacao);
	printf("\nTotal de gasto Limpeza: %.2f R$", limpeza);
	printf("\nTotal de gasto Higiene: %.2f R$", higiene);
	printf("\nTotal de gastos geral: %.2f R$\n", (alimentacao + limpeza + higiene));

}

