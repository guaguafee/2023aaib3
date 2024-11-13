/// week10-4.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    Cat(string _name){ ///物件建構子 constructor
        name = _name;
    } /// 沒有return值
    void print(){
        cout << "I am a cat, My name is " << name << ".\n" ;
           }
};

int main()
{ /// 建構出 cat1 cat2 的時候， 會用建構子，建構出物件
    Cat cat1("flower"), cat2("white");
    cat1.print();
    cat2.print();
}
