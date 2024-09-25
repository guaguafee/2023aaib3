///week03-2.cpp
///字串string vs. char
#include <stdio.h> ///C語言的輸入輸出
#include <iostream> ///C++的輸入輸出
#include <string>
using namespace std;

int main()
{
	printf("%d\n", 'a'); ///單引號代表1個字母，會對應1個數值
	printf("%d\n", "a"); ///雙引號代表很多個字母(字串)，就是陣列 指標

	if('a'==97) printf("其實'a'是數值97\n");
}

