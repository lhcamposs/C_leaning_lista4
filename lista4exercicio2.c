#include <stdio.h>

void main(){
    int x = 0, y = 1, fib, i;
    
    
    printf("Serie de fibonacci: %d\n", y);
    for(i = 0; i < 20; i++){
        fib = x + y;
        x = y;
        y = fib;
        
        printf("%d\n", fib);
    }
    
}

