#include <iostream>
using namespace std;
int main() {
   double n = 0;
    for(float i = 0; i<2000;i++) {
        n+=1/i;
        printf("%f",n);
    }
}