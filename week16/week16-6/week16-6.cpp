/// week16-6.cpp
/// CPE YKL33.UVA299 Train Swapping [2/2]
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
            ///cout << a[i] << " "; /// delet later
        }

        /// STEP03: Bubble Sort
        int ans = 0;
        for(int k=0; k<N-1; k++){
            for(int i=0; i<N-1; i++){
                if(a[i]>a[i+1]){
                    swap(a[i], a[i+1]);
                    ans++;
                }
            }
        }
        ///cout << "\n"; /// delet later

        cout << "Optimal train swapping takes " << ans << " swaps.\n";
    } /// STEP02: Output
}
