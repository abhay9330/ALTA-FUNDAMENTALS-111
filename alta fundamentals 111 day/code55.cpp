#include <iostream>
using namespace std;
int n;
bool solve(int i, int j, int maze[10][10], int path[10][10]){
if (i == n - 1 && j == n - 1)
    {
       path[i][j] = 1;
        return true;
    }
    if (i >= n || j >= n || maze[i][j] == 0)
        return false;
    path[i][j] = 1;
    if (solve(i + 1, j, maze, path))
        return true;
    if (solve(i, j + 1, maze, path))
        return true;
    path[i][j] = 0;
    return false;
}
int main(){
    cin >> n;
    int maze[10][10], path[10][10] = {};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> maze[i][j];
    if (solve(0, 0, maze, path))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << path[i][j] << " ";
            cout << endl;
        }}}