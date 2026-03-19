#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int alen = a.length();
    int blen = b.length();
    int i = 0;
    while(i != alen){
        if(!isdigit(a[i])){
            a.erase(i, 1);
            alen--;
        }
        else{
            i++;
        }
    }
    i = 0;
    while(i != blen){
        if(!isdigit(b[i])){
            b.erase(i, 1);
            blen--;
        }
        else{
            i++;
        }
    }
    cout << stoi(a) + stoi(b);
    return 0;
}
