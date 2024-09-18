///Week02-2.cpp
///SOLIT-ADVANCE-006
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for(char c : s){
		if(c!='2') cout << c;
	}

	///cout << s;
	cout << "\n";
}
