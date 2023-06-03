#include <vector>
#include<iostream>
using namespace std;
int main() {
    vector<int> scores {2,3,45,5,6,7,8};
    for(auto score:scores) {
        cout<<score<<endl;
    }
}