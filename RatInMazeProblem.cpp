#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int size, vector<vector<int>> visited, vector<vector<int>> &input)
{
    if ((x >= 0 && x < size) && (y >= 0 && y < size) && visited[x][y] == 0 && input[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &input, int size, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
{

    // you have reached at x,y here.

    // base case
    if (x == size - 1 && y == size - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;
    // 4 choices - D/L/R/U

    // down
    int newx = x + 1;
    int newy = 0;
    if (isSafe(newx, newy, size, visited, input))
    {
        path.push_back('D');
        solve(input, size, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, size, visited, input))
    {
        path.push_back('L');
        solve(input, size, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, size, visited, input))
    {
        path.push_back('R');
        solve(input, size, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, size, visited, input))
    {
        path.push_back('U');
        solve(input, size, ans, newx, newy, visited, path);
        path.pop_back();
    }
    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &input, int size)
{
    vector<string> ans;
    // when source is 0(blocked path)
    if (input[0][0] == 0)
    {
        return ans;
    }
    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited = input;
    // initialize with 0
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(input, size, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int size;
    cout << "Enter size of vector:";
    cin >> size;
    vector<vector<int>> input(size, vector<int>(size));

    cout << "Enter vector elements:";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> input[i][j];
        }
    }

    vector<string> result = findPath(input, size);

    cout << "Our path towards destination is:" << endl;
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << endl;
    }

    return 0;
}
