///week12-1.cpp
///��Ƶ��c�� struct vs. class
#include <iostream>
using namespace std;

///struct Node {}; /// ������������ C�y�������c
///class Cat {}; /// ���e�X�P���йL C++��j�j

struct Node{
    int val; ///value���Y�g �o��Node�̪���
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
