#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    int tamanho;
    
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    
    tamanho = strlen(texto);
    
    printf("String invertida: ");
    for(int i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }
    
    return 0;
}
