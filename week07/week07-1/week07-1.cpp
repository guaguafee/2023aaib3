/// week07-1.cpp 還沒完成的LeetCode學習計畫，只做讀2D陣列及化2D陣列
///LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDrawBoard(int board[3][3]){ ///STEP4: 印出模擬的棋盤內容
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << ' ';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; ///STEP3: C的陣列，裡面都放0代表裡面沒有人放東西
        myDrawBoard(board);
        for(auto move : moves){ ///STEP1: C++遞迴進階
            int i = move[0], j = move[1]; ///STEP2: 取出陣列裡的值
            myDrawBoard(board);
        }

        return"B"; ///"A" or "B" or "Draw平手"
    }
};
