#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& m) {
    // Check if the position (x, y) is within bounds and is a valid move
    return (x >= 0 && x < n && y >= 0 && y < n && m[x][y] == 1 && visited[x][y] == 0);
}

void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector<vector<int>>& visited, string path) {
    // Base case: If we reached the destination, add the current path to the answer
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1; // Mark the current cell as visited

    // Define the possible moves (D, L, R, U)
    vector<pair<int, int>> moves = {{1, 0}, {0, -1}, {0, 1}, {-1, 0}};
    vector<char> directions = {'D', 'L', 'R', 'U'};

    // Explore each possible move
    for (int i = 0; i < 4; ++i) {
        int newx = x + moves[i].first;
        int newy = y + moves[i].second;
        if (isSafe(newx, newy, n, visited, m)) {
            path.push_back(directions[i]); // Append the current direction to the path
            solve(m, n, ans, newx, newy, visited, path); // Recur for the next move
            path.pop_back(); // Backtrack: Remove the last direction from the path
        }
    }

    visited[x][y] = 0; // Mark the current cell as unvisited for backtracking
}

vector<string> findPath(vector<vector<int>>& m, int n) {
    vector<string> ans;
    if (m[0][0] == 0 || m[n - 1][n - 1] == 0) {
        return ans; // If either the source or destination cell is blocked, return empty path
    }
    vector<vector<int>> visited(n, vector<int>(n, 0)); // Initialize visited array with zeros
    string path = ""; // Start with an empty path
    solve(m, n, ans, 0, 0, visited, path); // Find paths recursively from the source cell
    sort(ans.begin(), ans.end()); // Sort the paths lexicographically
    return ans; 
}

int main() {
    // Example maze
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    // Find paths in the maze
    vector<string> paths = findPath(maze, maze.size());

    // Output the paths
    cout << "Paths through the maze:" << endl;
    for (const string& path : paths) {
        cout << path << endl;
    }

    return 0;
}
