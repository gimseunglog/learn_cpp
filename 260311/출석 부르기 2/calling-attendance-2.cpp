#include <iostream>
using namespace std;

int main() {
    int s;
    while(1){
        cin >> s;
        if(s == 1){
            cout << "John\n";
        }
        else if(s == 2){
            cout << "Tom\n";
        }
        else if(s == 3){
            cout << "Paul\n";
        }
        else if(s == 4){
            cout << "Sam\n";
        }
        else{
            cout << "Vacancy\n";
            break;
        }
    }
    return 0;
}