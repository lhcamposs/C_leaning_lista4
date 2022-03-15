#include <stdio.h>

void main(){
    int i, num;
    
    for(i = 100; i >= 0; i--){
        num = i%2;
        if(num%2 == 0){
            printf("Número par: %d\n", i);
        }
    }
}

