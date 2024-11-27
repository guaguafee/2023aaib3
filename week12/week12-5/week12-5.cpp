///week12-5.cpp
///UVA 11349 [2/2]

#include <iostream>
using namespace std;
int a[100][100];
int main()
{
	int T, N, now;
	char c, c2; /// not important!!
	cin >> T; /// Step1 : Input

	for(int t=1; t<=T; t++){ /// Test Case t
		cin >> c >> c2 >> N; /// Step1 : Input
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> a[i][j]; /// Step3 : for-loop Input
			} /// Step4 : array
		}

		int bad = 0;

		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(a[i][j]<0) bad = 1;
				if(a[i][j] != a[N-1-i][N-1-j]) bad = 1;
			} /// Step5 : array N-1-i
		}

		if(bad==0) cout << "Test #" << t << ": Symmetric.\n"; ///Step2 : Output
		else cout << "Test #" << t << ": Non-symmetric.\n";
	}
}
