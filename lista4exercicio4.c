#include <stdio.h>

void main(){
    char nome [60];
    float salarioBruto, valorDesconto;
    int i;
    
    for(i = 0; i < 10; i++){
        printf("Informe seu nome: ");
        scanf("%[^\n]", nome);
        
        printf("Informe salario bruto: ");
        scanf("%f", &salarioBruto);
        
        getchar();
        if(salarioBruto >= 1300){
            valorDesconto = salarioBruto * 0.10;
            printf("O usuario %s paga %f de imposto\n",nome, valorDesconto);
            
        }
        else if(salarioBruto >= 2300){
            valorDesconto = salarioBruto * 0.15;
            printf("O usuario %s paga %f de imposto\n",nome, valorDesconto);
        }
        else{
            printf("O usuario %s é Isento\n", nome);
        }
    }
}

