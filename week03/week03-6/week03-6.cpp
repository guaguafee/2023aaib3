/// week03-6.cpp
///SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	while(true){ //also can write while(1)
		cin >> now;
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int num : a){
		if(num==now) ans++;
	}
	cout << ans << endl; //End Of Line
}
