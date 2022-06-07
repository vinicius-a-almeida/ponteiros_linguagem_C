#include <stdio.h>

int soma(int *pa, int *pb);
int main(){
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    printf("%d\n", soma(pa, pb));
    printf("%d %d", a, b);
    return 0;
}
int soma(int *pa, int *pb){
    *pa = 2 * *pa;
    *pb = 2 * *pb;
    return *pa + *pb;
}