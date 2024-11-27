///week12-4.cpp
///UVA 11349 [1/2]

#include <iostream>
using namespace std;

int main()
{
	int T, N, now;
	char c, c2; /// not important!!
	cin >> T; /// Step1 : Input
	for(int t=1; t<=T; t++){ /// Test Case t
		cin >> c >> c2 >> N; /// Step1 : Input
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> now; /// Step3 : for-loop Input
			}
		}
		cout << "Test #" << t << ": Symmetric.\n"; ///Step2 : Output
	}
}
