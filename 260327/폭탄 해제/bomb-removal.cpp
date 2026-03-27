#include <iostream>
using namespace std;

class bomb{
    public:
        string code;
        char color;
        int second;
        bomb(string code, char color, int second){
            this->code = code;
            this->color = color;
            this->second = second;
        }
};

int main() {
    string code;
    char color;
    int second;
    cin >> code >> color >> second;
    bomb info(code, color, second);
    cout << "code : " << info.code << endl;
    cout << "color : " << info.color << endl;
    cout << "second : " << info.second << endl;
    return 0;
}
