///week03-2.cpp
///�r��string vs. char
#include <stdio.h> ///C�y������J��X
#include <iostream> ///C++����J��X
#include <string>
using namespace std;

int main()
{
	printf("%d\n", 'a'); ///��޸��N��1�Ӧr���A�|����1�Ӽƭ�
	printf("%d\n", "a"); ///���޸��N��ܦh�Ӧr��(�r��)�A�N�O�}�C ����

	if('a'==97) printf("���'a'�O�ƭ�97\n");
}

