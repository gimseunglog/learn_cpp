#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(c == 'z'){
        c = 'a';
    }
    else{
        c += 1;
    }
    cout << c;
    return 0;
}
