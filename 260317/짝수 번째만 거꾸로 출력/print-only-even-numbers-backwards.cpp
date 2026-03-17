#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    int n = A.length();
    if(n % 2 == 1){
        n--;
    }
    for(int i = n - 1; i >= 0; i -= 2){
        cout << A[i];
    }

    return 0;
}
