///week03-3.cpp
///�Ʋ� string & iostream cin cout
#include <iostream>
#include <string>
using namespace std; ///So ����N���μg "std::string" or "std::cin" or "std::cout"
int main()
{
    string s;
    cout << "�п�J�@�ӫܪ����r��A�������n���Ů�: ";
    cin >> s;
    cout << "�r��" << s << "�����׬O" << s.length() << "\n";
    for(int i=0; i<s.length(); i++){
        cout << i << ":" << s[i] <<endl; ///endl �� l �O L ���p�g�Fendl = "\n"
    }
}
