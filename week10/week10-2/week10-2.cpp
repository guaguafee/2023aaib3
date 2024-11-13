/// week10-2.cpp
///練習 class
///你輸入class Cat 在加大括號 分號
#include <iostream>
using namespace std;

class Mouse{
/// 自己打跳行
public:
    void print(){
        cout << "I am a mouse, chi chi\n";
    }
};

class Cat{
/// 自己打跳行
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
