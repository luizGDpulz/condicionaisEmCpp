#include <iostream>
  
using namespace std;

int main(){
    int num;

    cout << "Entre com um numero: ";
    cin >> num;
    if (num > 0) {
        cout << "O numero digitado eh positivo" << endl;
    } else {
        cout << "O numero digitado não eh positivo" << endl;
    }
    return false;
}