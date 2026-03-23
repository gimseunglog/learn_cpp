#include <iostream>
using namespace std;

int even_five(int N){
    if(N % 2 == 0 && ((N / 10) + (N % 10)) % 5 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    cin >> n;
    if(even_five(n) == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}