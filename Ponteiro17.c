#include <stdio.h>


void Frac(float num, int* inteiro, float* frac){
    *inteiro = (int)num; // converte o número para inteiro, descartando a parte fracionária
    *frac = num - *inteiro; // calcula a parte fracionária subtraindo o inteiro do número original
}

int main(){
    float num = 3.14;
    int inteiro;
    float frac;

    Frac(num, &inteiro, &frac); // passa os endereços de inteiro e frac para a função

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionária: %f\n", frac);
    return 0;
}