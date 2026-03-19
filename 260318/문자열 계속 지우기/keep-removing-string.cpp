#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    while(A.find(B) != string::npos){
        int idx = A.find(B);
        A.erase(idx, B.length());
    }
    cout << A;
    return 0;
}
