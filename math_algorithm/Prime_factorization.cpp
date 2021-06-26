#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long N; //Nについて素因数分解
    cin >> N;
    int count = 0;  //素因数の数
    for (int i=2; i<=sqrt(N); i++){
        while (N%i==0){
            count++;
            N /= i;
        }
    }
}
