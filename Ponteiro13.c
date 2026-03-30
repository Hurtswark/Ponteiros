#include <stdio.h>
#include <string.h>

void lerString(char *pstr){
    printf("Digite um texto:");
    fgets(pstr,100,stdin);
    pstr[strcspn(pstr, "\n")] = '\0'; // Remove o caractere de nova linha lido pelo fgets
}

void Contem(char *pstr1, char *pstr2){
    if(strstr(pstr1, pstr2) != NULL){
        printf("A string '%s' contém a string '%s'\n", pstr1, pstr2);
    } else {
        printf("A string '%s' não contém a string '%s'\n", pstr1, pstr2);
    }
}

int main(){
    char str1[100], str2[100];
    char *pstr1 = str1, *pstr2 = str2;
    lerString(pstr1);
    lerString(pstr2);
    Contem(pstr1, pstr2);

}