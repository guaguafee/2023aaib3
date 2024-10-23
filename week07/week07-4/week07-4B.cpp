/// week07-4B.cpp
///學習計畫Simulation第4題
/// LeetCode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1, 0, -1, 0}; ///移動方向
        int dy[4] = {0, 1, 0, -1};
        int x = 0, y = 0, dir = 0; /// dir = direction(方向): 0右 1下 2左 3右
        for(char c : instructions){
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir+3)%4; /// 往左轉-1, 因會有負的，再+4再%4取餘數->+3
            if(c=='R') dir = (dir+1)%4; /// 往右轉+1, 0->1->2->3->0->1->2->3->0 ...
        }
        if(x==0 && y==0) return true; ///留在原地
        else if(dir==0) return false; ///不再原地，又朝原本方向，就會越走越遠
        else return true; ///方向有改，就一定會繞圈圈
    }
