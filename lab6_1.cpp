#include<iostream>
using namespace std;

int main(){
    int N = 1 , E = 0 , O = 0;

    while(N != 0){
    cout << "Enter an integer: ";
    cin >> N;
        if(N%2 == 0 && N != 0){
            E++;
        }
        if(N%2 != 0){
            O++;
        }
    }
    cout << "#Even numbers = " << E;
    cout << "\n#Odd numbers = " << O;

    return 0;
}
