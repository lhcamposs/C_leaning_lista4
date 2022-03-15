#include <stdio.h>

void main()
{
    int idade, opiniao, bom=0, regular=0, excelente=0, i, contEx;
    float porcentagem, mediaIdade;
    
    for(i=0; i<10; i++){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        
        printf("Diga sua opinião sobre o filme: \n");
        printf("1 - regular \t");
        printf("2 - bom \t");
        printf("3 - excelente \n");
        scanf("%d", &opiniao);
        
        if(opiniao == 3){
            excelente++;
            mediaIdade += idade;
            
        }
        else if(opiniao == 2){
            bom++;
            
        }
        else if(opiniao == 1){
            regular++;
        }
        else{
            printf("Essa opiniao não existe, tente novamente\n");
        }
        
    }
    mediaIdade = mediaIdade / excelente;
    
    porcentagem = bom;
    porcentagem = porcentagem / (i - 1);
    
    printf("O resultado da pesquisa: \n");
    printf("A media da idade das pessoas que responderam excelente: %f\n", mediaIdade);
    printf("O porcentual de pessoas que responderam bom: %f\n", porcentagem);
    printf("A quantidade de pessoas que responderam regular: %d", regular);
    
}



