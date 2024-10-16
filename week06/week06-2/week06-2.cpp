///week06-2.cpp
///CPE 第2題 UVA10107 - What is the Median ?
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;

    int now;
    while( cin >> now ){
        a.push_back(now);
        sort(a.begin(), a.end());
        int N = a.size();
        if(N%2==1) cout << a[N/2] << "\n";
        else cout << (a[N/2-1] + a[N/2])/2 << "\n";
        ///cout << now; ///先這樣寫
    } ///在小黑輸入時，結束全部輸入 ctrl-z 加 enter
}
