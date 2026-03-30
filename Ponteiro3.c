#include <stdio.h>

int lerVariavel(int a){
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    return a;
}

int main(){
    int a = 0;
    a = lerVariavel(a);
    int b = 0;
    b = lerVariavel(b);
    int *pa = &a, *pb = &b;

    if(pa > pb){
        printf("pa aponta para um endereço maior que pb\n");
        printf("Endereço de pa: %p\n", pa);
        printf("Endereço de pb: %p\n", pb);

    } else if(pa < pb){
        printf("pa aponta para um endereço menor que pb\n");
        printf("Endereço de pa: %p\n", pa);
        printf("Endereço de pb: %p\n", pb);
    } else {
        printf("pa e pb apontam para o mesmo endereço\n");
        printf("Endereço de pa: %p\n", pa);
        printf("Endereço de pb: %p\n", pb);
    }

    

    

}