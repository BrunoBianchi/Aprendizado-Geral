#include <iostream>
#include <iomanip>
#include <random>
#include <time.h>
using namespace std;
    int userCartas[3] = {0,0,0};
    int mesaCarta[3] = {0,0,0};
    int cartas[] = {1,2,3,4,5,6,7,8,9,10};
void printMao() {
    for(int i = 0; i< 3;i++) {
        if(userCartas[i] != 0) {
            
        }
    }
}

void printCard(int number) {
    cout<<"========"<<endl;
    cout<<"|"<<"      |"<<endl;
    cout<<"|"<<"      |"<<endl;
    cout<<"|  "<<number<<"   |"<<endl;
    cout<<"|"<<"      |"<<endl;
    cout<<"|"<<"      |"<<endl;
    cout<<"========"<<endl;
}
void pegarCarta(int n) {
            int random = rand() % 9;
            userCartas[n] = cartas[random];
            printCard(userCartas[n]);
}
int escolha() {
    int escolha =0;
    while(escolha==0) {
        cout<<"1. +1 Carta.\n2. Parar."<<endl;
        cin>>escolha;
        if(escolha != 1 && escolha !=2) {
        cout<<"1. +1 Carta.\n2. Parar."<<endl;
        cin>>escolha;
        }
    }
}
void turno(int escolha) {
    if(escolha == 1) {
        if(userCartas[1] == 0) {
             pegarCarta(1); 
        }else {
            int random = rand() % 9;
            userCartas[2] = cartas[random];
            pegarCarta(2); 
        }
    }else if(escolha == 2) {

    }
}
void start() {
    int random = rand() % 9;
    int userEscolha;
    userCartas[0] = cartas[random];
    printCard(userCartas[0]);
    userEscolha=escolha();
    turno( userEscolha);
}
int main() {
    srand((unsigned) time(NULL));
    start();
}
