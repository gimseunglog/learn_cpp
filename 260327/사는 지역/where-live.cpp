#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class information{
    public:
        string name;
        string address;
        string region;
        information(string name, string address, string region){
            this->name = name;
            this->address = address;
            this->region = region;
        }
        information() { }
        bool operator<(const information& other) const{
            return name < other.name;
        }
};

int main() {
    int n;
    cin >> n;
    information info[10];
    for(int i = 0; i < n; i++){
        string name;
        string address;
        string region;
        cin >> name >> address >> region;
        info[i] = information(name, address, region);
    }  
    sort(info, info + n);
    cout << "name " << info[n-1].name << endl;
    cout << "addr " << info[n-1].address << endl;
    cout << "city " << info[n-1].region << endl;
    return 0;
}