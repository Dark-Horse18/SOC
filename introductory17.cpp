#include <bits/stdc++.h>
using namespace std;

vector<bool> colo(8, false);
vector<bool> cdiag(15, false); // row+col
vector<bool> bdiag(15, false); // row-col+7
long long ans = 0;

void solve(vector<vector<char>> chessboard, long long row_number) {
    if(row_number == 8) {
        ans++;
        return;
    }
    for(long long i = 0; i < 8; i++) {
        if(chessboard[row_number][i] == '*') continue;
        if(colo[i] || cdiag[row_number+i] || bdiag[row_number-i+7]) continue;
        colo[i] = true;
        cdiag[row_number+i] = true;
        bdiag[row_number-i+7] = true;
        solve(chessboard, row_number+1);
        colo[i] = false;
        cdiag[row_number+i] = false;
        bdiag[row_number-i+7] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<char>> chess_board(8, vector<char>(8, false));
    for(long long x = 0; x < 8; x++) {
        for(long long y = 0; y < 8; y++) {
            cin >> chess_board[x][y];
        }
    }

    solve(chess_board, 0);

    cout << ans;


    return 0;
}