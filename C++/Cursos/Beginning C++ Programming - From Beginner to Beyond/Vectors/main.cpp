#include <vector>
#include <iostream>
using namespace std;

int main() {
// Vetor Unidimensional
vector <int> test {1,2,3,4,5,6,7,8,9,10};
// Adicionado elemento ao vetor:
test.push_back(90);
for(int i = 0;i<test.size();i++) {
    cout<<test.at(i)<<endl;
}
// Vetor Bidimensional
vector <vector<int>>  test2 {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15}
};
for(int i = 0;i< test2.size();i++) {
    for(int j = 0; j < test2.size();j++) {
        cout<<test2[i][j]<<endl;
    }
}
}