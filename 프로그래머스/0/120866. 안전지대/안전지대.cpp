#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int N = board.size();
    int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[8] = {0, 0, -1, 1, -1, 1, -1 ,1};
    
    vector<pair<int, int>> boom;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == 1) boom.push_back({i, j});
        }
    }
    for (auto& b : boom) {
        int x = b.first;
        int y = b.second;
        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < N && 0 <= ny && ny < N) {
                board[nx][ny] = 1;
            }
        }
    }
    int count = 0;
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < N; ++y) {
            if (board[x][y] == 0) {
                ++count;
            }
        }
    }
    return count;
}