#include <stdio.h>
 
int main() {

   char linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
   int tabuleiro [10][10];

//Inicializando com 0 (agua)
   for (int i=0; i<10;i++){
    for (int j=0; j<10; j++){
        tabuleiro[i][j]=0;
    }
   }

 
// Posicionamento horizontal
tabuleiro [4][6]=3;
tabuleiro [4][7]=3; 
tabuleiro [4][8]=3;
//posicionamento vertical 
tabuleiro [3][3]=3;
tabuleiro [4][3]=3;
tabuleiro [5][3]=3;


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
    //Impressao do tabuleiro 
    for (int j=0; j<10;j++){
    printf ("%d ", tabuleiro [i][j]);
 }     
 printf ("\n");  

} 
}


