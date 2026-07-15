#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define DIM 3
void jogoDaVelha(){
    
    int tabuleiro[DIM][DIM];
    int vez, jogador1, jogador2, linha, coluna, jogadas, contador, somador, quantidadeDeEspacos;
    vez = 1;
    jogador1 = 0;
    jogador2 = 0;
    jogadas = 0;
    contador = 0;
    somador = 0;
    quantidadeDeEspacos = 0;
           
    for(linha = 0; linha < DIM; linha += 1){
        for(coluna = 0; coluna < DIM; coluna += 1){
            tabuleiro[linha][coluna] = 0;
        }
    }
           
    for(contador = 0; contador < DIM; contador += 1){
        printf("  %d  ", contador);
    }
           
    printf("\n");
    contador = 0;
    
    for(linha = 0; linha < DIM; linha += 1){
        printf("\n%d", contador);
        contador += 1;
           
        for(coluna = 0; coluna < DIM; coluna += 1){
           
            if(tabuleiro[linha][coluna] == 1){
                printf("  X  ");
            }
            if(tabuleiro[linha][coluna] == 5){
                printf("  O  ");
            }
            if(tabuleiro[linha][coluna] == 0){
                printf("  .  ");
            }
            if(coluna == 2){
                printf("\n");
                printf("\n");
            }
        }
    }
    while(quantidadeDeEspacos < 9){
    quantidadeDeEspacos = 0;
                   
    if(vez == 1 && jogador1 != 1 && jogador2 != 1){
        while(vez == 1){
            printf("\nVez do jogador 1\n");
            printf("digite a Linha:\n ");
            scanf("%d", &linha);
            printf("digite a coluna:\n ");
            scanf("%d", &coluna);
            if(tabuleiro[linha][coluna] != 0){
                printf("Esta Possição ja esta ocupada\n");
            }
            else{
                tabuleiro[linha][coluna] = 1;
                vez = 2;
            }
        }
    }
   
    for(contador = 0; contador < DIM; contador += 1){
        printf("  %d  ", contador);
    }
    printf("\n");
    contador = 0;
    
    for(linha = 0; linha < DIM; linha += 1){
        printf("\n%d", contador);
        contador += 1;
        for(coluna = 0; coluna < DIM; coluna += 1){
            if(tabuleiro[linha][coluna] == 1){
                printf("  X  ");
            }
            if(tabuleiro[linha][coluna] == 5){
                printf("  O  ");
            }
            if(tabuleiro[linha][coluna] == 0){
                printf("  .  ");
            }
            if(coluna == 2){
                printf("\n");
                printf("\n");
            }
        }
    }
    linha = 0;
    coluna = 0;
        while(linha < DIM){
            somador = tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2];
            if(somador == 3){
                jogador1 +=1;
            }
                    somador = tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna];
           
                    if(somador == 3){
                        jogador1 += 1;
                    }
           
                    somador = tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2];
           
                    if(somador == 3){
                        jogador1 += 1;
                    }
                    somador = tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2];
           
                    if(somador == 3){
                        jogador1 += 1;
                    }  
           
                    linha += 1;
                    coluna += 1;
                }
                for(linha= 0; linha < DIM; linha += 1 ){
                    for(coluna = 0; coluna < DIM; coluna += 1){
                        if(tabuleiro[linha][coluna] != 0) {
                            quantidadeDeEspacos += 1;
                        }
                    }
                }
               
                if(jogador1 > 0){
                    printf("jogador 1 ganhou parabesns\n");
                    break;
                }
               
                else if (jogador2 > 0){
                    printf("jogador 2 ganhou para parabens\n");
                    break;
                }
               
                else if( quantidadeDeEspacos == 9){
                    printf("Velha!!\n");
                    break;
                }
               
                if(vez == 2 && jogador1 != 1 && jogador2 != 1){

                    while(vez == 2){
                            printf("\nVez do jogador 2\n");
           
                            printf("digite a Linha:\n ");
                            scanf("%d", &linha);
           
                            printf("digite a coluna:\n ");
                            scanf("%d", &coluna);
       

                            if(tabuleiro[linha][coluna] != 0){
                                printf("Esta possição ja esta ocupado\n");
                   
                            }
                            else{
                                tabuleiro[linha][coluna] = 5;
                                vez = 1;
                            }
                        }
                }

                for(contador = 0; contador < DIM; contador += 1){
                    printf("  %d  ", contador);
                }
       
                printf("\n");
                contador = 0;
       
                for(linha = 0; linha < DIM; linha += 1){
           
                    printf("\n%d", contador);
                    contador += 1;
           
                    for(coluna = 0; coluna < DIM; coluna += 1){
           
                        if(tabuleiro[linha][coluna] == 1){
                            printf("  X  ");
                        }
                        if(tabuleiro[linha][coluna] == 5){
                            printf("  O  ");
                        }
                        if(tabuleiro[linha][coluna] == 0){
                            printf("  .  ");
                        }
                        if(coluna == 2){
                            printf("\n");
                            printf("\n");
                        }
                    }
                }
                linha = 0;
                coluna = 0;

                while(linha < DIM){
                    somador = tabuleiro[linha][0] + tabuleiro[linha][1] + tabuleiro[linha][2];
   
                    if(somador == 15){
                        jogador2 +=1;
                    }
           
                    somador = tabuleiro[0][coluna] + tabuleiro[1][coluna] + tabuleiro[2][coluna];
           
                    if(somador == 15){
                        jogador2 += 1;
                    }
           
                    somador = tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2];
           
                    if(somador == 15){
                        jogador2 += 1;
                    }
                    somador = tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2];
           
                    if(somador == 15){
                        jogador2 += 1;
                    }
           
                    linha += 1;
                    coluna += 1;
                }
               
                if(jogador1 > 0){
                    printf("jogador 1 ganhou parabesns\n");
                    break;
                }
                else if (jogador2 > 0){
                    printf("jogador 2 ganhou para parabens\n");
                    break;
                }
               
                vez = 1;
                jogadas += 1;
                quantidadeDeEspacos = 0;
               
                for(linha= 0; linha < DIM; linha += 1 ){
                    for(coluna = 0; coluna < DIM; coluna += 1){
                        if(tabuleiro[linha][coluna] != 0) {
                            quantidadeDeEspacos += 1;
                        }
                    }
                }
            }
               
        }  

void jogoDaForca(){
    char palavra[] = "BATatinha";
    char palpiteDoUsuario;
    int i, forca, contador, contadorDeAcertos, acertos, contadorDeErros;
    size_t tamanho = strlen(palavra);
    contadorDeErros = 0;
    char chute[tamanho];
   
   
    forca = 7;
    contador = forca;

    for(i= 0 ; i < tamanho; i += 1) {
        chute[i] = '_';
    }

for(i = 0; i < tamanho; i+= 1){
    if(palavra[i] >= 65 && palavra[i] <= 90){
        palavra[i] = palavra[i] + 32;
    }
}
    i = 0;

    contadorDeAcertos = 0;

    while (contador != 0) {
        if(contadorDeAcertos >= tamanho){
            contador = 0;
        }
        else if(contadorDeErros == 7){
            contador = 0;
        }
        if(contadorDeErros == 0){
            printf("____________\n");
            printf("|          |\n");
            printf("|          \n");
            printf("|          \n");
            printf("|\n");
        }
        else if(contadorDeErros == 1){
            printf("____________\n");
            printf("|          |\n");
            printf("|          o\n");
            printf("|          \n");
            printf("|\n");
        }
        else if(contadorDeErros == 2){
            printf("____________\n");
            printf("|          |\n");
            printf("|          o\n");
            printf("|          |\n");
            printf("|\n");
        }
        else if(contadorDeErros == 3){
            printf("____________\n");
            printf("|          |\n");
            printf("|          o\n");
            printf("|         (|\n");
            printf("|\n");
        }
        else if(contadorDeErros == 4){
            printf("____________\n");
            printf("|          |\n");
            printf("|          o\n");
            printf("|         (|)  \n");
            printf("|\n");
        }    
        else if(contadorDeErros == 5){
            printf("____________\n");
            printf("|          |\n");
            printf("|          o\n");
            printf("|         (|) \n");
            printf("|         (\n");
        }
   
           else if(contadorDeErros == 6){
            printf("____________\n");
            printf("|          |\n");
            printf("|          o\n");
            printf("|         (|)\n");
            printf("|         ( )\n");
        }
   
        i = 0;
        acertos = 0;

        printf("Digite uma letra: ");
        scanf(" %c", &palpiteDoUsuario);
       
 
        while(i != tamanho) {
            if(palpiteDoUsuario != palavra[i]) {
                printf(" %c ", chute[i]);
            }

            else if(palpiteDoUsuario == palavra[i]) {
                chute[i] = palpiteDoUsuario;
                printf(" %c ", chute[i]);

                acertos += 1;
                contadorDeAcertos += 1;
            }
           
            i +=1;
        }
        printf("\n");
        if(acertos == 0) {
            contador -= 1;
            contadorDeErros += 1;
        }
    }

    if(contadorDeAcertos >= tamanho) {
        printf("Parabens voce ganhou.\n");
    }
    else{
        printf("Voce perdeu.\n");
    }
}
    
void BatalhaNaval(){
    
    int tabuleiro[TAM][TAM];
    int linha, coluna, navio, tentativa, contador, naviosLinha, naviosColuna, acertos;
    acertos = 0;
    naviosColuna = 0;
    naviosLinha = 0;
   
    for(linha = 0; linha < TAM; linha += 1){
        for(coluna = 0; coluna < TAM; coluna  += 1){
            tabuleiro[linha][coluna] = 0;
        }
    }
       
    srand(time(NULL));
   
    for(navio = 0; navio < TAM; navio += 1){
        coluna = rand() % 10 + 1;
        linha = rand() % 10 + 1;
        tabuleiro[linha][coluna] = 1;
    }
   
    for(tentativa = 0; tentativa < TAM; tentativa += 1){
       
        printf(" ");
        printf(" ");
        printf(" ");
       
        for(contador = 0; contador < TAM; contador += 1){
            printf(" %d ", contador);
        }
       
        printf("\n");
        contador = 0;
       
        for(linha = 0; linha < TAM; linha += 1){

            printf("\n%d  ",contador);
       
            for(coluna = 0; coluna < TAM; coluna += 1){
                    if(tabuleiro[linha][coluna] == 0 || tabuleiro[linha][coluna] == 1){
                        printf(" ~ ");
                    }
                    else if (tabuleiro[linha][coluna] == 2){
                        printf(" . ");  
                    }
                    else if(tabuleiro[linha][coluna] == 3){
                        printf(" X ");
                    }
            }
            contador += 1;
        }    
       
        printf("\n");
        printf("\n");
       
        printf("Digite uma linha:\n ");
        scanf("%d", &linha);
       
        printf("\n");
       
        printf("Dgite uma coluna:\n ");
        scanf("%d", &coluna);
       
            naviosLinha = 0;
            naviosColuna = 0;
              contador = coluna;
       
        if(tabuleiro[linha][coluna] == 1){
            printf("Você acertou um navio!!\n");
            tabuleiro[linha][coluna] = 3;
            acertos += 1;
        }
        else if(tabuleiro[linha][coluna] != 1){
            printf("Você errou.\n");
                tabuleiro[linha][coluna] = 2;


            for(coluna = 0; coluna < TAM; coluna += 1){
                if(tabuleiro[linha][coluna] == 1 ){
                    naviosLinha += 1;
                }
            }  
            coluna = contador;
           
            for(linha = 0; linha < TAM; linha += 1){
                if(tabuleiro[linha][coluna] == 1){
                    naviosColuna += 1;
                }
            }
           
            printf("Tem %d navios na mesma linha e %d navios na mesma coluna.\n", naviosLinha, naviosColuna);
        }    
    }
   
    if(acertos >= 9){
        printf("Meus parabens você acertou %d/10 você foi muito bem\n",acertos);
    }
    else if(acertos >= 7){
        printf("Você foi bem voce acertou %d/10\n", acertos);
    }
    else if(acertos >= 5){
        printf("Você acertou %d/10 não desista\n", acertos);
    }
    else if(acertos < 4){
    printf("É melhor você trocar de hobbie %d/10\n", acertos);
    }

}

int main()

{
    int opcao;
   
    while(opcao != 0){

        printf("-------Bem-Vindo-------\n");
        printf("Escolha o jogo de sua preferencia\n");
        printf("0 - Sair\n");
        printf("1 - Jogo da Velha\n");
        printf("2 - Jogo da forca\n");
        printf("3 - Batalha naval\n");
        printf("Sua opção: \n");
        scanf("%d", &opcao);
        printf("----------------------\n");
        printf("\n");
       
        if(opcao == 1){
       
            printf("Bem vindo ao jogo da velha e divirtaçe\n");
            printf("\n");
            jogoDaVelha();
        }
        else if(opcao == 2){
            jogoDaForca();
        }
        else if(opcao == 3){
            BatalhaNaval();
        }
    }    
    return 0;
}
