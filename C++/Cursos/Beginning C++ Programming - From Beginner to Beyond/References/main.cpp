#include <iostream>
#include <vector>
using namespace std;

int main() {   
    vector<string> names = {"Bruno","Thais"};
    for(auto &name:names) {
        name = "testa"; //Mudar o nome do elemento para testa
        cout<<name<<endl;
    }
}