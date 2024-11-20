/// week11-1.cpp
/// Use <Hash Map> & <Hash Set>
/// version is C++ 2021 -> Setting-Compiler, ¥[¤J c++11
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> table;
    table[9977341] = 9;
    table[4433997] = 4;

    cout << table[9977341] << "\n";
    cout << table[4433997] << "\n";
}
