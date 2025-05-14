#include <stdio.h>
#include <string.h>

int main() {
    char senha[101];
    int tem_numero = 0, tem_maiuscula = 0, tem_minuscula = 0;

    printf("Digite a senha: ");
    fgets(senha, sizeof(senha), stdin);

    senha[strcspn(senha, "\n")] = '\0';
    
    int tamanho = strlen(senha);

    if(tamanho < 8 || tamanho > 100) {
        printf("Senha invalida!");
        return 1;
    }

    for(int i = 0; senha[i]; i++) {
        if(senha[i] >= '0' && senha[i] <= '9') {
            tem_numero = 1;
        }
        else if(senha[i] >= 'A' && senha[i] <= 'Z') {
            tem_maiuscula = 1;
        }
        else if(senha[i] >= 'a' && senha[i] <= 'z') {
            tem_minuscula = 1;
        }
    }

    if(tem_numero && tem_maiuscula && tem_minuscula) {
        printf("Senha valida!");
    } else {
        printf("Senha invalida!");
    }
    
    return 0;
}
