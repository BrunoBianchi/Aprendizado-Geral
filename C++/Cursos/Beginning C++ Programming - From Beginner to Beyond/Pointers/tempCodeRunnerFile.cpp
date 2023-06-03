#include <iostream>
 #include<math.h>
using namespace std;
 
int main() {
 
    int h1,m1,h2,m2,horas,minutos;
    horas = 0;
    cin>>h1>>m1>>h2>>m2;
    minutos = abs((h1 *60 + m1) - (h2 *60 +m2)) ;
    if(minutos >60) {
        horas = minutos /60;
        minutos -= horas * 60;
    }else {
        if(h1 == h2 && m1==m2) {
            horas = 24;
            minutos = (24 * 60) - minutos;
            horas = minutos/60;
            minutos -= horas * 60;
        }else if(h1 == h2 && m1!=m2) {
            horas = 0;
            minutos = abs(m1-m2);
        }else if(h1>h2) {
            horas = (h2+24 )-h1;
            minutos = abs(m1-m2);
        }
    }
    cout<<"O JOGO DUROU "<<horas<<" HORA(S) E "<<minutos<<" MINUTO(S)"<<endl;
    return 0;
}