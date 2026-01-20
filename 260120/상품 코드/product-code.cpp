#include <iostream>
#include <string>
using namespace std;

class product {
    public:
        string name;
        int code;

        product(string name = "codetree",int code = 50) {
            this->name = name;
            this->code = code;
        }

        void print() {
            cout<< "product " << code << " is " << name << endl;
        }

        

};
int main() {
    string name;
    int code;

    product p1 = product();

    cin >>name >> code;
    product p2 = product(name,code);
    p1.print();
    p2.print();

    return 0;
}