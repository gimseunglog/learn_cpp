#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int min = a.length();
    if(b.length() < min){
        min = b.length();
    }
    if(c.length() < min){
        min = c.length();
    }
    int max = a.length();
    if(b.length() > max){
        max = b.length();
    }
    if(c.length() > max){
        max = c.length();
    }
    cout << max - min;
    
    return 0;
}