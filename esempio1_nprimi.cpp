#include <iostream>

using namespace std;

int main() {
    int c = 0;
    int is_prime = 0;
    int iter = 0;
    int num = 0;
    int numero_primi = 0;
    cin >> numero_primi;
    num = 3;
    is_prime = 1;
    if ((numero_primi >= 1)) {
        cout << 2 << endl;
    } else {
        
    }
    iter = 2;
    while((iter <= numero_primi)) {
        for (c = 2; numero_primi / 2>c; c++) {
            if (((num % c == 0))) {
                is_prime = 0;
            } else {
                
            }
        }
        if ((is_prime)) {
            cout << num << endl;
            iter = iter + 1;
        } else {
            
        }
        is_prime = 1;
        num = num + 1;
    }
}
