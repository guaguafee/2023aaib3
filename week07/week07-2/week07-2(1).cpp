/// week07-2(1).cpp
///LeetCode�ǲ߭p�e Simulation��3�D
///Ū2D�}�C �e2D�}�C ����1, 2�H
///LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDrawBoard(int board[3][3]){ //STEP4: �L�X�������ѽL���e
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << ' ';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; ///STEP3: C���}�C�A�̭�����0�N��̭��S���H��F��
        int now = 1; ///1, 2, 1, 2 (�� now = 3-now �N�|���ʤF)
        myDrawBoard(board);
        for(auto move : moves){ ///STEP1: C++���j�i��
            int i = move[0], j = move[1]; ///STEP2: ���X�}�C�̪���
            board[i][j] = now;
            myDrawBoard(board);
            now = 3-now;
        }
        return "B";
    }
};
