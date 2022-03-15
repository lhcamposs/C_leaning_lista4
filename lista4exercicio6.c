#include <stdio.h>

void main(){
    int n, i, fat;
    
    fat = 1;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(i = n; i > 0; i--){
        if(n > 1){
            fat *= i;
            printf("Numero fatorial: %d \n", fat);
        }
        else{
            break;
        }
    }
    while (n != 0);
}
