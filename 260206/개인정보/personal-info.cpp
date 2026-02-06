#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student{
    public:
        string name;
        int height;
        float weight;

        student(string name, int height, float weight) {
            this->height =height;
            this->weight =weight;
            this->name = name;
        }
        student(){}

};

bool cmp1(student a, student b) {
    return a.name < b.name;
}
bool cmp2(student a, student b) {
    return a.height > b.height;
}

int main() {

    int n=5;

    student students[n];
    string name;
    int height;
    float weight;
    

    for(int i=0;i<n;i++) {
        cin >> name >> height >> weight;
        students[i] = student(name,height,weight);
    }

    sort(students,students+n,cmp1);
    cout << "name" << endl;
    for(int i=0;i<n;i++) {
       cout <<  students[i].name << " "<< students[i].height << " " << students[i].weight  << endl;
    }

    cout << endl;
    sort(students,students+n,cmp2);
    cout << "height" << endl;
    for(int i=0;i<n;i++) {
       cout <<  students[i].name << " "<< students[i].height << " " << students[i].weight  << endl;
    }
    return 0;
}
