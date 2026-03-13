#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int c = (int)'A';
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i <= j){
                cout << (char)c << ' ';
                if(c == (int)'Z'){
                    c = (int)'A';
                }
                else{
                    c++;
                }
            }
            else{
                cout << "  ";
            }
            
        }
        cout << endl;
    }
    return 0;
}