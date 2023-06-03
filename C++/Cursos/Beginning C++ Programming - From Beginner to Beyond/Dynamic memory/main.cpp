#include <iostream>
using namespace std;

int main() {
    // Criando um ponteiro
    int *int_point = {nullptr};
    // Alocando um endereco de memoria para ponteiro
    int_point = new int;
    // Endereco
    cout<<int_point<<endl;
    // Lixo alocado para essa memoria
    cout<<*int_point<<endl;
    // Atribuindo valor para esse endereco
    *int_point  = 100;
    // print 100
    cout<<*int_point<<endl;
    // deletando esse armazenamento da memoria (liberando espaco!);
    delete int_point;

    cout<<"Tamanho da array:"<<endl;
    int tamanho = 0;
    cin>>tamanho;
    
    int *array = {nullptr};
    // Criando um array com mais de 1 inteiro
    array = new int[tamanho];
    cout<<"Endereco de memoria da array: "<<array<<endl;
    for(int i = 0;i<tamanho;i++)  {
        array[i] = i;
        cout<<"Elemento " <<i<<" endereco de memoria: "<<(array + i) <<" com valor: "<<*(array + i)<<endl;
    }
    // Deletando armazenamento de array 
    delete [] array;
    return 0 ;
}