#include <stdio.h> //Biblioteca padrão de entrada e saída em C

//Declaração das funções que serão usadas no programa
void converterParaKmH(); //Função para converter m/s para km/h
void converterParaMs();  //Função para converter km/h para m/s

int main(){
    int opcao; //Variável que armazena a escolha do usuário no menu

    //Exibe o menu principal do programa
    printf("==== Conversor de Velocidade ====\n");
    printf("1 - Converter de m/s para km/h\n"); //Opção 1: Converter de m/s para km/h
    printf("2 - Converter de km/h para m/s\n"); //Opção 2: Converter de km/h para m/s
    printf("3 - Sair\n"); //Opção 3: Sair do programa
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao); //Lê a opção escolhida pelo usuário

    //Estrutura switch para determinar a ação de acordo com a opção escolhida
    switch(opcao){
        case 1: 
            //Chama a função para converter de m/s para km/h
            converterParaKmH();
            break;
        case 2: 
            //Chama a função para converter de km/h para m/s
            converterParaMs();
            break;
        case 3: 
            //Mensagem de saída e encerramento do programa
            printf("Saindo...\n");
            return 0; // Encerra o programa com sucesso
        default: 
            //Caso o usuário insira uma opção inválida
            printf("Opcao invalida!\n");
    }

    return 0; //Retorno padrão da função main indicando execução bem-sucedida
}

//Função para converter de metros por segundo (m/s) para quilômetros por hora (km/h)
void converterParaKmH(){
    float ms, kmh; //Variáveis para armazenar a velocidade em m/s e km/h

    //Solicita ao usuário a velocidade em m/s
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms); //Lê o valor de m/s fornecido pelo usuário

    //Conversão de m/s para km/h (1 m/s = 3.6 km/h)
    kmh = ms * 3.6; 

    //Exibe o resultado da conversão
    printf("Velocidade em km/h: %.2f\n", kmh); //Mostra o resultado com 2 casas decimais
}

//Função para converter de quilômetros por hora (km/h) para metros por segundo (m/s)
void converterParaMs(){
    float kmh, ms; //Variáveis para armazenar a velocidade em km/h e m/s

    //Solicita ao usuário a velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh); //Lê o valor de km/h fornecido pelo usuário

    //Conversão de km/h para m/s (1 km/h = 1 / 3.6 m/s)
    ms = kmh / 3.6;

    //Exibe o resultado da conversão
    printf("Velocidade em m/s: %.2f\n", ms); //Mostra o resultado com 2 casas decimais
}