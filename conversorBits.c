//Conversor de bits, bytes, kilobytes, megabytes, gigabytes, terabytes
//Autor: Guilherme Aguiar

#include <stdio.h>

int conversorBits(){
    int opcao;
    float valor;
    float resultado;
    printf("Escolha a unidade de medida que deseja converter:\n");
    printf("1 - Bits\n");
    printf("2 - Bytes\n");
    printf("3 - Kilobytes\n");
    printf("4 - Megabytes\n");
    printf("5 - Gigabytes\n");
    printf("6 - Terabytes\n");
    scanf("%d", &opcao);
    printf("Digite o valor que deseja converter:\n");
    scanf("%f", &valor);
    switch(opcao){
        case 1:
            resultado = valor;
            break;
        case 2:
            resultado = valor * 8;
            break;
        case 3:
            resultado = valor * 8 * 1024;
            break;
        case 4:
            resultado = valor * 8 * 1024 * 1024;
            break;
        case 5:
            resultado = valor * 8 * 1024 * 1024 * 1024;
            break;
        case 6:
            resultado = valor * 8 * 1024 * 1024 * 1024 * 1024;
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
    printf("O valor convertido eh: %.2f\n", resultado);
    return 0;
}