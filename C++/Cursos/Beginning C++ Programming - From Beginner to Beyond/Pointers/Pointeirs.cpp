#include <iostream>
using namespace std;
int main() {
    // Inicializando um ponteiro para um endereco nulo!
    double *int_pointer {nullptr};
    double score = {10.0};
    // Print dara 0, ponteiro nao possui endereco!
    cout<<int_pointer<<endl;
    // Definindo o endereco do ponteiro para o endereco da variavel score
    int_pointer = &score;
    // Print dara 10, tera o mesmo valor!
    cout<<*int_pointer<<endl;
    // mudando o valor da variavel score por meio de um ponteiro!
    *int_pointer +=1;
    // Score agora dara 11, apesar de ser variaveis diferentes,o ponteiro e score possuem o mesmo endereco!
    cout<<score<<endl;
    // Tamanho alocado para o endereco que ponteiro aponta!
    cout<<sizeof int_pointer<< endl;
    // Tamanho do conteudo que o ponteiro aponta
    cout<<sizeof *int_pointer<< endl;
}