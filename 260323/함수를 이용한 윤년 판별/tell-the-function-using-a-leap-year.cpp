#include <iostream>

using namespace std;

bool is_leap(int y){
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
        return true;
    }
    return false;
}

int main() {
    int y;
    cin >> y;
    if(is_leap){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}