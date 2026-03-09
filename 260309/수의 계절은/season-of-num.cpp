#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;
    if(3 <= M && M <= 5){
        cout << "Spring";
    }
    else if(6 <= M && M <= 8){
        cout << "Summer";
    }
    else if(9 <= M && M <= 11){
        cout << "Fall";
    }
    else{
        cout << "Winter";
    }
    return 0;
}