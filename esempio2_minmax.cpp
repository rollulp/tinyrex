#include <iostream>

using namespace std;

int main() {
    int max = 0;
    int min = 0;
    int n = 0;
    cin >> n;
    if ((n == 0)) {
        cout << n << endl;
    } else {
        max = n;
        min = n;
        while((n)) {
            cin >> n;
            if (((n < min) && (n))) {
                min = n;
            } else {
                
            }
            if ((n > max)) {
                max = n;
            } else {
                
            }
        }
        cout << min << endl;
        cout << max << endl;
        
    }
}
