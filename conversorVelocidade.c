#include <stdio.h>

void converterParaKmH();
void converterParaMs();

int main() {
    int opcao;

    printf("==== Conversor de Velocidade ====\n");
    printf("1 - Converter de m/s para km/h\n");
    printf("2 - Converter de km/h para m/s\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            converterParaKmH();
            break;
        case 2:
            converterParaMs();
            break;
        case 3:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

void converterParaKmH() {
    float ms, kmh;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);

    kmh = ms * 3.6;  // Conversão de m/s para km/h
    printf("Velocidade em km/h: %.2f\n", kmh);
}

void converterParaMs() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;  // Conversão de km/h para m/s
    printf("Velocidade em m/s: %.2f\n", ms);
}
