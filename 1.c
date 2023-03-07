#include <stdio.h>
#define MAX 1000

int main(){
    int v[MAX];
    int n, k;
    int i, j;
    int cont = 0;

    printf("digite o tamanho do vetor:");
    scanf("%d", &n);
    printf("Digite o valor de k:");
    scanf("%d", &k);

    printf("Digite os elementos do vetor:\n");
    for(i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }

    for(i = 0; i<n && !cont;i++){
        for(j = 1; j<n && !cont; j++){
            if(v[i]+v[j]==k){
                cont = 1;
            }
        }
    }

    if(cont){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
return 0;
}