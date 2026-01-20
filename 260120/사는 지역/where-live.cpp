#include <iostream>
#include <string>
using namespace std;

class people {
    public:
        string name,addr,city;

        people(string name, string addr, string city) {
            this->name = name;
            this-> addr = addr;
            this-> city = city;
        }
        people() {}

};

int main() {
    string name,addr,city;
    int n;
    cin >> n;
    people peoples[n];
    for(int i=0;i<n;i++) {
        cin >> name >> addr >> city;
        peoples[i] = people(name,addr,city);
    }

    int index=0;
    for(int i=0;i<n;i++) {
        if(peoples[index].name < peoples[i].name) index=i;
    }
    cout<< "name " << peoples[index].name << endl;
    cout<< "addr " << peoples[index].addr << endl;
    cout<< "city " << peoples[index].city << endl;
    return 0;
}