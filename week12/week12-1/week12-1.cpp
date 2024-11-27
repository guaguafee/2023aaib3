///week12-1.cpp
///資料結構的 struct vs. class
#include <iostream>
using namespace std;

///struct Node {}; /// 都有分號結尾 C語言的結構
///class Cat {}; /// 之前幾周有教過 C++更強大

struct Node{
    int val; ///value的縮寫 這個Node裡的值
};

class Cat{
public:
    string name; /// cat's name
};

int main()
{
    Cat cat1;
    cat1.name = "Cattie";

    Node node;
    node.val = 1;
}
