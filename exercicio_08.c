#include <stdio.h>

int main(){
    float a[10];
    int i;
    for(i = 0; i <= 9; i++){
        printf("%p\n", &a[i]);
    }
    return 0;
}