#include <stdio.h>
int main(){
    int voto;
    scanf("%d", &voto);
    (voto>=0) ? printf("voto positivo\n")
            : printf("voto negativo\n");
    return 0;
}