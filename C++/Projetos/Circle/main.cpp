#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main() {
    int raio,tamanho,meio;
    cout<<"Qual Tamanho de raio que deseja? ";
    cin>> raio;
    tamanho = raio * 2 +  1;                                                                                                                                                                                                                
    char **matriz = (char**)malloc(sizeof(char) * tamanho *tamanho);
    for(int linha = 0;linha<tamanho;linha++) {
        matriz[linha] = (char*) malloc(sizeof(char) * tamanho);
        for(int coluna = 0;coluna<tamanho;coluna++) {
            // Definir meio da matriz!!
            meio = raio;
            if(round(sqrt(pow((tamanho - linha),2) + pow((tamanho - coluna),2))) == raio) {
                matriz[linha][coluna] = '*'; 
            }else {
                  matriz[linha][coluna] = 'b';
            }
            cout<<matriz[linha][coluna]<<"\t";
        }
        cout<<"\n";
    }
}