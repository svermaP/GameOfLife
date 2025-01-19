#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
using namespace std;

int alive(int cell, int aliveCells) {
    if (cell == 1) {
        if (aliveCells < 2) {
            return 0;
        } else if (aliveCells < 4) {
            return 1;
        } else {
            return 0;
        }
    } else {
        if (aliveCells == 3) {
            return 1;
        }
    }
    return 0;
}

void calculateNextGen(vector<vector<int>>& initGrid, vector<vector<int>>& newGrid) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < initGrid.size(); i++) {
        for (int j = 0; j < initGrid[i].size(); j++) {
            int aliveCells = 0;
            for (int k = 0; k < 8; k++) {
                int new_i = i + dx[k];
                int new_j = j + dy[k];

                if (new_i >= 0 && new_i < initGrid.size() && new_j >= 0 && new_j < initGrid[i].size()) {
                    aliveCells += initGrid[new_i][new_j];
                }
            }
            newGrid[i][j] = alive(initGrid[i][j], aliveCells);
        }
    }
}

void printGrid(vector<vector<int>>& initGrid, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << initGrid[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "-------------------------------------------------------------------------------------------------------------------\n";
}
int main() {
    int rows {10};
    int cols {10};
    int generations {30};
    vector<vector<int>> initGrid(rows, vector<int>(cols, 0));
    vector<vector<int>> newGrid(rows, vector<int>(cols, 0));
    

    initGrid[1][2] = 1;
    initGrid[2][3] = 1;
    initGrid[3][1] = 1;
    initGrid[3][2] = 1;
    initGrid[3][3] = 1;


    printGrid(initGrid, rows, cols);

    for (int i = 0; i < generations; i++) {
        this_thread::sleep_for(std::chrono::milliseconds(500));
        calculateNextGen(initGrid, newGrid);
        printGrid(newGrid, rows, cols);
        initGrid = newGrid;
    }
}