#include <iostream>
using namespace std;

int main() {
    string t1, t2;
    cin >> t1 >> t2;
    if(t1.length() > t2.length()){
        cout << t1 << " " << t1.length();
    }
    else if(t1.length() < t2.length()){
        cout << t2 << " " << t2.length();
    }
    else{
        cout << "same";
    }
    return 0;
}