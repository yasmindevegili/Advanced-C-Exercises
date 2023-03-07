#include <stdio.h>
#define MAX 1000

int main(){
    int v[MAX];
    int s[MAX];
    int n;
    int i;
    int cont = 1;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    printf("Digite os elementos do vetor:\n");
    for(i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(i=0; i<n; i++){
        cont = cont * v[i];
    }
    
    for(i=0; i<n; i++){
        s[i] = cont / v[i];
    }
    
    printf("v = [");
        for(i=0; i<n; i++){
            printf(" %d ", v[i]);
        }
    printf("], e a saida sera s = [");
        for(i=0; i<n; i++){
            printf(" %d ", s[i]);
        }
    printf("]");

}