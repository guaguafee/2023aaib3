/// week10-2.cpp
///�m�� class
///�A��Jclass Cat �b�[�j�A�� ����
#include <iostream>
using namespace std;

class Mouse{
/// �ۤv������
public:
    void print(){
        cout << "I am a mouse, chi chi\n";
    }
};

class Cat{
/// �ۤv������
public:
    void print(){
        cout << "I am a cat, meow meow\n";
    }
};

int main()
{
    Mouse mouse1, mouse2;
    Cat cat1, cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
