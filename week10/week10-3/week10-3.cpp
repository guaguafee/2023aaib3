/// week10-3.cpp
/// �n�m�� class ��ܦh�����
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    void print(){
        cout << "I am a cat, My name is " << name << "\n" ;
           }
};

int main()
{
    Cat cat1, cat2;
    cat1.name = "flower";
    cat1.print();
    cat2.name = "white";
    cat2.print();
}
