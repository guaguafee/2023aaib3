/// week07-2(2).cpp
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
    bool testWin(int board[3][3], int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true; /// �W�����
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true; /// �������
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true; /// �U�����

        ///�A�ӬO����
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true; /// ������
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true; /// ������
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true; /// �U����

        ///�﨤�u
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true; /// ���W�k�U
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true; /// �k�W���U
        return false; ///�e���S���\->����
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; ///STEP3: C���}�C�A�̭�����0�N��̭��S���H��F��
        int now = 1; ///1, 2, 1, 2 (�� now = 3-now �N�|���ʤF)
        ///myDrawBoard(board);
        for(auto move : moves){ ///STEP1: C++���j�i��
            int i = move[0], j = move[1]; ///STEP2: ���X�}�C�̪���
            board[i][j] = now;
            /// myDrawBoard(board);
            if(testWin(board, now)){
                if(now==1) return "A";
                else return "B";
           }
            now = 3-now;
        }
        if(moves.size()==9) return "Draw"; ///����9�B�A����
        else return "Pending"; ///�S����9�B�A���H�~��U�APending is ����
    }
};
