#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;
    int a[100], b[100];
    for(int i = 0; i < N1; i++){
        cin >> a[i];
    }
    for(int i = 0; i < N2; i++){
        cin >> b[i];
    }
    int c = 0;
    for(int i = 0; i < N1; i++){
        for(int j = 0; j < N2; j++){
            if(a[i + j] == b[j]){
                c = 1;
            }
            else{
                c = 0;
                break;
            }
        }
        if(c){
            break;
        }
    }
    if(c){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}