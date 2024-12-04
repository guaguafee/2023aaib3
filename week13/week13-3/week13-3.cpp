/// week13-3.cpp
/// Use LeetCode's Playground programing
/// LeetCode 把 #include <iostream> & using namespace std; 寫好了
/// 右下角， stdin 可以輸入資料
int main() {
    int a, b;
    vector<int> A, B;

    while(cin >> a >> b){
        A.push_back(a); /// number(a) put into 陣列[A]
        B.push_back(b); /// number(b) put into 陣列[B]
    }
    sort( A.begin(), A.end() ); /// Target : 把A從小到大排好
    sort( B.begin(), B.end() ); /// Target : 把B從小到大排好
    int ans = 0;
    for(int i=0; i< A.size(); i++){
        ///cout << A[i] << " "; /// Output is really 從小到大
        ans += abs(A[i] - B[i]); /// 相減 只取正的
    }
    cout << "the total answer is " << ans;
}
