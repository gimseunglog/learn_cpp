#include <iostream>
using namespace std;

int main() {
    int fy, sy;
    char fg, sg;
    cin >> fy >> fg;
    cin >> sy >> sg;
    cout << ((fy >= 19 && fg == 'M') || (sy >= 19 && sg == 'M'));
    return 0;
}