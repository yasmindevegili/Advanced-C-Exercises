#include <stdio.h>

int main(){

    int n;

    printf("Digite um numero:");
    scanf("%d", &n);

    for(int i=0; i<=10; i++){
        if(i!=n && i!=0 && i%n==0){
            printf("Numero primo");
        }
    }

}