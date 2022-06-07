#include <stdio.h>

int troca(int *a, int *b);
int main(){
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;
    printf("%d\n%d\n\n", a, b);
    troca(pa, pb);
    printf("%d\n%d\n", a, b); 
    return 0;
}

int troca(int *pa, int *pb){
    int aux1, aux2;
    aux1 = *pa;
    aux2 = *pb;
    *pa = aux2;
    *pb = aux1;
}
//exercicio 4.