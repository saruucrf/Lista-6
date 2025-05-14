#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000], filtrado[1000];
    int j = 0, tamanho;
    
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    for(int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        if(c >= 'A' && c <= 'Z') {
            filtrado[j++] = c + 32; 
        } else if(c >= 'a' && c <= 'z') {
            filtrado[j++] = c;
        } else if(c >= '0' && c <= '9') {
            filtrado[j++] = c;
        }
    }
    filtrado[j] = '\0';
    
    tamanho = strlen(filtrado);
    int palindromo = 1;

    for(int i = 0; i < tamanho/2; i++) {
        if(filtrado[i] != filtrado[tamanho - 1 - i]) {
            palindromo = 0;
        }
    }
    
    if(palindromo && tamanho > 0) {
        printf("\nE um palindromo!\n");
    } else {
        printf("\nNao e um palindromo.\n");
    }
    
    return 0;
}
