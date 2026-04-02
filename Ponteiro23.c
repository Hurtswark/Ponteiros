#include <stdio.h>

 void MaiorLinha(int *vet, int tamanho, int quantidade){
    int maior = -9999;
    if(tamanho <= 0){
        printf("Tamanho do vetor deve ser maior que zero.\n");
        return;
    }

    for(int i = 0; i < tamanho; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vet[i]);
        if((i + 1) % quantidade == 0){
            printf("\n");
        }
    }

}
int main(){
    int tamanho,quantidade = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vet[tamanho];
    for(int i = 0; i < tamanho; i++){
        printf("Digite o elemento [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor de elementos por linha:");
    scanf("%d", &quantidade);

    MaiorLinha(vet, tamanho, quantidade);


}