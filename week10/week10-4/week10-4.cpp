/// week10-4.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    Cat(string _name){ ///����غc�l constructor
        name = _name;
    } /// �S��return��
    void print(){
        cout << "I am a cat, My name is " << name << ".\n" ;
           }
};

int main()
{ /// �غc�X cat1 cat2 ���ɭԡA �|�Ϋغc�l�A�غc�X����
    Cat cat1("flower"), cat2("white");
    cat1.print();
    cat2.print();
}
