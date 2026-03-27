#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class information{
    public:
        string name;
        int height, weight;
        information(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        information() { }
};

bool cmp(information a, information b){
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    information info[10];
    for(int i = 0; i < n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        info[i] = information(name, height, weight);
    }
    sort(info, info + n, cmp);
    for(int i = 0; i < n; i++){
        cout << info[i].name << ' ' << info[i].height << ' ' << info[i].weight << endl;
    }
    return 0;
}