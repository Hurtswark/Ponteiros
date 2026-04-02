#include <stdio.h>

void Calc_esfera(float raio, float *area, float *volume){
    *area = 4 * 3.14 * raio * raio;
    *volume = 4.0/3.0 * 3.14 * raio * raio * raio;
}

int main(){
    float raio = 5.0;
    float area, volume;

    Calc_esfera(raio,&area,&volume); // passa os endereços de area e volume para a função

    printf("Area da esfera: %2.2f", area);
    printf("\nVolume da esfera: %2.2f", volume);
    return 0;
}

