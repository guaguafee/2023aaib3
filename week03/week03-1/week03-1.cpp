///week03-1.cpp
///測試:瘋狂程設-除惡務盡，無法執行
///Because Of "range-base for 迴圈"必須在C++11(2011之後)才能用
///If Using C++98(1988年ver.) 便會無法正確編譯 執行會出錯 迴圈出問題
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

