#include <stdio.h>

void main(){
    char nome[60];
    int n, dias;
    float total;
    while(n != 0){
        printf("Digite o nome do cliente: \n");
        scanf("%[^\n]", nome);
     
        printf("Digite o numero da conta: \n");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        printf("Quantidade de dias: \n");
        scanf("%d", &dias);
    }
    if(dias >= 10){
    total = (dias * 30) + (dias * 8);
    }
    else{
    total = (dias * 30) + (dias * 15);
    }
    
    printf("O custo total foi de: R$%f\n", total);
    
}
