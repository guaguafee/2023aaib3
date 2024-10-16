///week06-2a.cpp
///CPE 第2題 UVA10107 - What is the Median ?
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;

    int now;
    while( cin >> now ){
        a.push_back(now);
        cout << now << "\n";///先這樣寫
    } ///在小黑輸入時，結束全部輸入 ctrl-z 加 enter
}
