///week12-6.cpp
///UVA 11349 [1/1]

#include <iostream>
using namespace std;
int a[10000];
int main()
{
	int T, N;
	cin >> T;

	for(int t=1; t<=T; t++){
		char c, c1;
		cin >> c >> c1 >> N;
		for(int i=0; i<N*N; i++) cin >> a[i];

		int bad = 0;

		for(int i=0; i<N*N; i++){
			if(a[i]<0) bad = 1;
			if(a[i] != a[N*N-1-i]) bad = 1;
		}

		if(bad==0) cout << "Test #" << t << ": Symmetric.\n"; ///Step2 : Output
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}
}
