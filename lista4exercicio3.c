#include <stdio.h>

void main(){
    char nome[60];
    float p1, p2, media, somaMedias=0, mediaGeral;
    int i;
    
    for(i = 0; i < 15; i++){
        printf("Digite seu nome: ");
        scanf("%[^\n]", nome);
        
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &p1);
        
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &p2);
        
        getchar();
        
        media = (p1 + p2)/ 2;
        
        printf("\nO nome do aluno é: %s", nome);
        printf("\nA nota da p1 foi %f, e a nota da p2 foi %f", p1, p2 );
        printf("\nA media do aluno é: %f\n\n", media);
        
        somaMedias = somaMedias + media;
        
    }
    mediaGeral = somaMedias/ i;
    printf("\n A media geral da turma é: %f", mediaGeral);
}

