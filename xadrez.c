#include <stdio.h>

//COMANDOS REF. A RECURSIVIDADE
    void movertorre(int casast) {
    if (casast > 0) {
        printf("DIREITA\n");
        movertorre(casast -1);
    }
}
    void moverbispo(int casast) {
    if (casast > 0) {
        printf("CIMA,DIREITA\n");
        moverbispo(casast -1);
    }
}
    void moverrainha(int casast) {
    if (casast > 0) {
        printf("ESQUERDA\n");
        moverrainha(casast -1);
    }

}


int main (){

    
//começo dadescrição do codigo
printf("Movimentando peças de chadrez!!!\n");


//comando for para movimentação do bispo loop
    printf("movimentando o BISPO LOOP:\n");


    for(int i =1; i<=5; i++){
    printf("CIMA, DIREITA\n",i);
    }
printf("\n");

//comando for para movimentação da torre
    printf("movimentando a TORRE LOOP:\n");


    for(int i =1; i<=5; i++){
    printf("DIREITA\n",i);
    }

printf("\n");
    
//comando for para movimentação da rainha
    printf("movimentando a RAINHA LOOP:\n");

    for(int i =1; i<=8; i++){
    printf("ESQUERDA\n",i);
    }

    printf("\n");

        printf("MOVIMENTAÇÃO CAVALO:\n");

        //for externo while
        // externo while
        int m =1;
         while ( m--)
          {

            
            // interno for
            for(int j = 0; j <=1; j++){

                printf("BAIXO\n");                
            }

            printf("ESQUERDA\n\n");
        }

    // RECURSVIDADE TORRE/BISPO/RAINHA
    printf("movimentando a Torre RECURSIVIDADE:\n");
     movertorre(5);

        printf("\n");
    printf("movimentando a Bispo RECURSIVIDADE:\n");
    moverbispo(5);

        printf("\n");
    printf("movimentando a RAINHA RECURSIVIDADE:\n");
    moverrainha(8);

    printf("final da execução do codigo!");

return 0;
}
