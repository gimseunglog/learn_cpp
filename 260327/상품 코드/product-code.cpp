#include <iostream>
#include <string>

using namespace std;

class product{
    public:
        string name;
        int code;
    product(string name, int code){
        this->name = name;
        this->code = code;
    }
};

int main() {
    string name;
    int code;
    cin >> name >> code;
    product a("codetree", 50);
    product b(name, code);
    cout << "product " << a.code << " is " << a.name << endl;
    cout << "product " << b.code << " is " << b.name;
    return 0;
}