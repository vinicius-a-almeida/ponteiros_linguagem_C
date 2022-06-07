#include <stdio.h>

int main(){
    int vet[5], i;
    int *p_vet = &vet[0];
    for(i = 0; i <= 4; i++){
        scanf("%d", (vet + i));
    }
    printf("-----------------------------\n");
    for(i = 0; i <= 4; i++){
      if(*(p_vet + i) % 2 == 0){
          printf("%p\n", (p_vet + i));
      }  
    }
    
}