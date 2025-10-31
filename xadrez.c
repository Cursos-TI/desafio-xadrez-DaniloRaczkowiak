#include <stdio.h>
int main (){

    
//começo dadescrição do codigo
printf("Movimentando peças de chadrez!!!\n");


//comando for para movimentação do bispo
    printf("movimentando o BISPO:\n");


    for(int i =1; i<=5; i++){
    printf("CIMA, DIREITA\n",i);
    }
printf("\n");

//comando for para movimentação da torre
    printf("movimentando a TORRE:\n");


    for(int i =1; i<=5; i++){
    printf("DIREITA\n",i);
    }

printf("\n");
    
//comando for para movimentação da rainha
    printf("movimentando a RAINHA:\n");

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

    printf("final da execução do codigo!");

return 0;
}
