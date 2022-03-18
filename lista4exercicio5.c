#include <stdio.h>

void main()
{
    int idade, opiniao, bom=0, regular=0, excelente=0, i;
    float porcentagem, mediaIdade=0;
    
    for(i=0; i<20; i++){
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
            break;
        }
        
    }
    
    printf("O resultado da pesquisa: \n");
    
    if( excelente != 0 ){
        mediaIdade = mediaIdade / excelente;
        printf("A media da idade das pessoas que responderam excelente: %f\n", mediaIdade);
        
    }
    else{
        printf("Nenhuma pessoa responderam execelente. \n");
    }
    
    
    porcentagem = bom;
    porcentagem = porcentagem / i * 100  ;
    
    
    
    printf("O percentual de pessoas que responderam bom: %f\n", porcentagem);
    printf("A quantidade de pessoas que responderam regular: %d", regular);
    
}
