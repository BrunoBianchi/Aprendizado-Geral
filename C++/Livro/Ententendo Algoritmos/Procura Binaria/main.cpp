#include <iostream>
using namespace std;
int TAM = 1000;
int tentativas = 0;
void verificarMonte(int numero,int maior,int menor) {
    int meio = (maior + menor )/2;
    if(numero < meio) {
        maior = meio -1;
        tentativas++;
        verificarMonte(numero,maior,menor);
    }else if(numero>meio) {
        menor = meio + 1;
        tentativas++;
        verificarMonte(numero,maior,menor);
    }else {
        int descoberta = meio;
        cout<<"Binary Search: \n";
        cout<<"Seu Numero eh o "<<descoberta<<endl;
        cout<<"Houve um total de "<<tentativas<<" tentativas"<<endl;
    }
}
void  verificarMonteLento(int numero,int maior) {
    int tentantivasLinear = 0;
    for(int i = 0;i<maior;i++) {
        if(i == numero) {
            cout<<"Busca Linear:\n";
            cout<<"Seu Numero eh o "<<i<<endl;
            cout<<"Houve um total de "<<tentantivasLinear<<" tentativas"<<endl;
        }else {
           tentantivasLinear++;
        }
    }
}
int main() {
    int numero = 0;
    cout<<"Digite um numero de 0 ate 1000"<<endl;
    cin>>numero;
     verificarMonte(numero,1000,0);
    verificarMonteLento(numero,1000);
    return 0;
}