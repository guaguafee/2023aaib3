/// week11-5.cpp
#include <iostream>
using namespace std;

int main()
{
    int n = 12345; ///輸入的 n 是 12345
    cout << "原本的 n is : " << n << "\n";

    cout << "剝下最右邊的皮: " << n%10 << "\n";

    n = n/10;

    cout << "n 變小了，現在: " << n << "\n";

    cout << "剝下最右邊的皮: " << n%10 << "\n";

    n = n/10;

    cout << "n 變小了，現在: " << n << "\n";

    cout << "剝下最右邊的皮: " << n%10 << "\n";

    n = n/10;

    cout << "n 變小了，現在: " << n << "\n";

    cout << "剝下最右邊的皮: " << n%10 << "\n";

    n = n/10;

    cout << "n 變小了，現在: " << n << "\n";

    cout << "剝下最右邊的皮: " << n%10 << "\n";

    n = n/10;

    cout << "n 變小了，現在: " << n << "\n";

    cout << "剝下最右邊的皮: " << n%10 << "\n";

    n = n/10;

    cout << "n 變小了，現在: " << n << "\n";
}
