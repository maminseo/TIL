#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student{
    public:
        string name;
        int height, weight;

        student(string name, int height, int weight) {
            this->height =height;
            this->weight =weight;
            this->name = name;
        }
        student(){}

};

bool cmp(student a, student b) {
    if(a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}


int main() {

    int n;
    cin >> n;

    student students[n];
    string name;
    int height, weight;
    

    for(int i=0;i<n;i++) {
        cin >> name >> height >> weight;
        students[i] = student(name,height,weight);
    }

    sort(students,students+n,cmp);
    for(int i=0;i<n;i++) {
       cout <<  students[i].name << " "<< students[i].height << " " << students[i].weight << endl;
    }

   
    return 0;
}

