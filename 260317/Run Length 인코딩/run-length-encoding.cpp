#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    
    string b = {};
    for(int i = 0; i < A.length(); i++){
        int c = 1;
        while(A[i] == A[i + 1]){
            i++;
            c++;
        }
        b += A[i];
        b += to_string(c);
    }
    cout << b.length() << endl << b;
    
    return 0;
}
