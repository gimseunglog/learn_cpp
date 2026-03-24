#include <iostream>

using namespace std;

void even_div(int *a){
    int i = 0;
    while(a[i] != 0){
        if(a[i] % 2 == 0){
            a[i] /= 2;
        }
        i++;
    }
}

int main() {
    int N;
    cin >> N;
    int a[50] = { 0 };
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    even_div(a);
    for(int i = 0; i < N; i++){
        cout << a[i] << ' ';
    }
    return 0;
}