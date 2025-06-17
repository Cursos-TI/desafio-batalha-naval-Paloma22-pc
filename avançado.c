#include <stdio.h>


int main() {

   char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
   int tabuleiro [10][10];
   int espaconav= 3;

   int colunanav1=4;
   int linhanav1=6;

   int colunanav2=3;
   int linhanav2=5;

   int linhanav3=0;
   int colunanav3=0;

   int colunanav4=7;
   int linhanav4=1;

//Inicializando com 0 (agua)
   for (int i=0; i<10;i++){
    for (int j=0; j<10; j++){
        tabuleiro[i][j]=0;
    }
   }
 //Navio horizontal
   for (int i=0; i <3;i++){
    tabuleiro [colunanav1] [linhanav1+i]=espaconav;
    }
// Navio vertical
   for (int i=0; i <3;i++){
    tabuleiro [colunanav2+i] [linhanav2]=espaconav;
    } 
//Navio Diagonal
 for (int i=0; i <3;i++){
    tabuleiro [colunanav3+i] [linhanav3+i]=espaconav;
    } 
     for (int i=0; i <3;i++){
    tabuleiro [colunanav4+i] [linhanav4+i]=espaconav;
    } 



//Impressao das letras
printf ("   ");
for (int j =0; j<10; j++){
    printf (" %c", linha[j]);}
 printf ("\n");  


 //impressao numeros
     for (int i=0; i<10;i++){
        if (i <9){
            printf (" %d  ", i +1);
        }
        else {
            printf ("%d  ", i + 1);
        }
    //Impressao da agua (0)
    for (int j=0; j<10;j++){
    printf ("%d ", tabuleiro [i][j]);
 }     
 printf ("\n");  

} 
}