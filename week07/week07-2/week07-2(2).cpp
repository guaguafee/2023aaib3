/// week07-2(2).cpp
///LeetCode學習計畫 Simulation第3題
///讀2D陣列 畫2D陣列 模擬1, 2人
///LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDrawBoard(int board[3][3]){ //STEP4: 印出模擬的棋盤內容
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << ' ';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    bool testWin(int board[3][3], int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true; /// 上面橫行
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true; /// 中間橫行
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true; /// 下面橫行

        ///再來是直的
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true; /// 左直行
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true; /// 中直行
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true; /// 下直行

        ///對角線
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true; /// 左上右下
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true; /// 右上左下
        return false; ///前面沒成功->失敗
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; ///STEP3: C的陣列，裡面都放0代表裡面沒有人放東西
        int now = 1; ///1, 2, 1, 2 (把 now = 3-now 就會跳動了)
        ///myDrawBoard(board);
        for(auto move : moves){ ///STEP1: C++遞迴進階
            int i = move[0], j = move[1]; ///STEP2: 取出陣列裡的值
            board[i][j] = now;
            /// myDrawBoard(board);
            if(testWin(board, now)){
                if(now==1) return "A";
                else return "B";
           }
            now = 3-now;
        }
        if(moves.size()==9) return "Draw"; ///走完9步，平手
        else return "Pending"; ///沒走完9步，等人繼續下，Pending is 等待
    }
};
