#include <stdio.h>

int main(){
    float mat[3][3];
    int i, j;
    for(i = 0; i <= 2; i++){
        for(j=0; j <= 2; j++){
            printf("%p\n", &mat[i][j]);
        }
    }
    return 0;
}