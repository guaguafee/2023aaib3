///week03-1.cpp
///����:�ƨg�{�]-���c�ȺɡA�L�k����
///Because Of "range-base for �j��"�����bC++11(2011����)�~���
///If Using C++98(1988�~ver.) �K�|�L�k���T�sĶ ����|�X�� �j��X���D
///Code::Blocks 17.12 -> Setting -> Compiler -> No.2
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(char c:s){
		if(c!='2') cout << c;
	}
	cout << "\n";
}

