///week07-3.cpp
///UVA 10107
#include <vector>
#include <iostream>
#include <algorithm> ///sort()
using namespace std; ///STEP1

int main()
{
	vector<int> a; ///STEP2
	int now;
	while(cin >> now){ ///STEP1
		a.push_back(now); ///STEP2
		sort(a.begin(), a.end()); ///STEP3
		int N = a.size(); ///STEP4
		if(N%2==1) cout << a[N/2] << "\n"; ///STEP5
		else cout << (a[N/2-1]+a[N/2])/2 << "\n";
	}
}
