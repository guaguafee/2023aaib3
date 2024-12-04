/// week13-3.cpp
/// Use LeetCode's Playground programing
/// LeetCode �� #include <iostream> & using namespace std; �g�n�F
/// �k�U���A stdin �i�H��J���
int main() {
    int a, b;
    vector<int> A, B;

    while(cin >> a >> b){
        A.push_back(a); /// number(a) put into �}�C[A]
        B.push_back(b); /// number(b) put into �}�C[B]
    }
    sort( A.begin(), A.end() ); /// Target : ��A�q�p��j�Ʀn
    sort( B.begin(), B.end() ); /// Target : ��B�q�p��j�Ʀn
    int ans = 0;
    for(int i=0; i< A.size(); i++){
        ///cout << A[i] << " "; /// Output is really �q�p��j
        ans += abs(A[i] - B[i]); /// �۴� �u������
    }
    cout << "the total answer is " << ans;
}
