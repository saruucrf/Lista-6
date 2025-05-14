#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    int tamanho_strlen, tamanho_manual = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    tamanho_strlen = strlen(texto);

    while(texto[tamanho_manual] != '\0') {
        tamanho_manual++;
    }

    printf("\nResultados:\n");
    printf("Usando strlen(): %d\n", tamanho_strlen);
    printf("Calculo manual:  %d\n", tamanho_manual);
    
    if(tamanho_strlen == tamanho_manual) {
        printf("\nOs resultados sao iguais!\n");
    } else {
        printf("\nERRO: Os resultados diferem!\n");
    }

    return 0;
}
