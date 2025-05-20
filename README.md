# Conway's Game of Life (C++)

A simple C++ implementation of Conway’s Game of Life. Uses a 2D grid to simulate how cells live, die, or reproduce across generations based on the original rules. Built to practice working with arrays, neighbor-checking logic, and simulation loops. Prints each generation to the terminal.

### Features
- Cell evolution within terminal
- You can adjust the grid size and the number of generations you want to visualize
- This current version starts with a glider seed initialization, but you can make it whatever you want
- Clear, modular structure with grid update and state transition functions

### How to Run

#### 1. Clone the repository
```bash
git clone https://github.com/svermaP/GameOfLife.git
cd GameOfLife
```

#### 2. Compile the program
```bash
g++ -std=c++17 -o game_of_life gameoflife.cpp
```

#### 3. Run the simulation
```bash
./game_of_life
```
