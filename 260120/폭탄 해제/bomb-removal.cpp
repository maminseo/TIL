#include <iostream>
#include <string>
using namespace std;

class boom{
    public: 
        string code,color;
        int time;

        boom(string code,string color, int time) {
            this->code = code;
            this->color = color;
            this->time = time;
        }
        boom() {}

        void print() {
            cout << "code : " << code <<endl;
            cout << "color : " << color << endl;
            cout <<  "second : " << time << endl;
        }

};

int main() {
    
    string code,color;
    int time;
    cin >> code >> color >> time;
    boom boom1 = boom(code,color,time);
    boom1.print();
    return 0; 
}