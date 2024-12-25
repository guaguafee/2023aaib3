/// week16-5.cpp
/// CPE YKL33.UVA299 Train Swapping [1/2]
# include <iostream>
# include <vector>
using namespace std;
int main()
{
    int T, N;
    cin >> T; /// STEP01: Input
    for(int t=0; t<T; t++){
        cin >> N; /// STEP01: Input
        vector<int> a(N);
        for(int i=0; i<N; i++){
            cin >> a[i]; /// STEP01: Input
            cout << a[i] << " "; /// delet later
        }
        cout << "\n"; /// delet later

        cout << "Optimal train swapping takes 1";
    } /// STEP02: Output
}
