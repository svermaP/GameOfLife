# Conway's Game of Life (C++)

A lightweight implementation of Conway's Game of Life written in C++. Simulates a 2D cellular automaton evolving over time, following the original rules devised by mathematician John Conway.

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
