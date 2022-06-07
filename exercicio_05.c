#include <stdio.h>

int maior(int *pa,int *pb);
int main(){
    int a, b;
    int *pa = &a, *pb = &b; 
    scanf("%d %d", &a, &b);
    printf("%d, %d\n\n", *pa, *pb);
    maior(pa, pb);
    printf("%d, %d\n\n", *pa, *pb);
    return 0;
}
int maior(int *pa, int *pb){
    int aux;
    if(*pa > *pb){
        return;
    }else{
        aux = *pa;
        *pa = *pb;
        *pb = aux;
    }
}