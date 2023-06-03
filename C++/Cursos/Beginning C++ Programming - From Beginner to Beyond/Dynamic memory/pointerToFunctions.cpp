#include <iostream>
using namespace std;

int* createArray(size_t size) {
    int* array= {nullptr};
    array = new int[size];
    for(int i = 0;i<size;i++) {
        array[i] = i;
    }
    return array;
    delete [] array;
}
 void MudarPorX2(int *int_ptr) {
    *int_ptr *=2;
 }
int main() {
    int *array= {nullptr};
    cout<<"tamanho da array: "<<endl;
    size_t size;
    cin>>size;
    array = createArray(size);
    for(int i = 0;i<size;i++) {
        cout<<array[i]<<endl;
         MudarPorX2((array+i));
         cout<<array[i]<<endl;
    }
    delete [] array;
    return 0;
}