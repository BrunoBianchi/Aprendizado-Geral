#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Definindo um vetor de nomes e inicializando com Bruno e Julia
    vector<string> nomes {"Bruno","Julia"};
    // Definindo um ponteiro de vector string e inicializando com um endereco nulo
    vector<string> *nomes_pointer {nullptr};
    // Print do segundo nome do vetor "nomes" (Julia)
    cout<<nomes.at(1)<<endl;
    // Mudando o endereco do pointeiro para o endereco do vetor "nomes"
    nomes_pointer = &nomes;
    // Mudando o argumento 2 do vetor "Nomes" via ponteiro Julia -> julia
    (*nomes_pointer).at(1) = "julia";
    // Print Novo valor
    cout<<nomes.at(1)<<endl;
    // Pushando novo valor para o vetor "nomes" via ponteiro
    (*nomes_pointer).push_back("Gilberto"); 
    // Printando novo valor pushado!
    cout<<nomes.at(2)<<endl;
    cout<<&(*nomes_pointer)<<endl;
    /*
   for(int i= 0;i<(*nomes_pointer).size();i++) {
    cout<<"Endereco de "<<i<<" "<<&(*nomes_pointer).at(i)<<endl;
   }
    */

   for(auto nome:*nomes_pointer) {
    cout<<nome<<endl;
   }
}