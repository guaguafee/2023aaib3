///week06-2.cpp
///CPE ��2�D UVA10107 - What is the Median ?
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
        ///cout << now; ///���o�˼g
    } ///�b�p�¿�J�ɡA����������J ctrl-z �[ enter
}
