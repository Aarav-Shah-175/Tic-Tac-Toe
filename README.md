# Tic-Tac-Toe Game in C

Welcome to the Tic-Tac-Toe game implemented in C! This simple console-based game allows two players to play Tic-Tac-Toe on a 3x3 grid.

## Table of Contents

- [Description](#description)
- [Installation](#installation)
- [Usage](#usage)


## Description

This Tic-Tac-Toe game is a console-based application written in C. It allows two players to take turns marking cells on a 3x3 grid, with the objective of getting three of their symbols (either 'O' or 'X') in a row, column, or diagonal. The game checks for a win condition or a draw and provides feedback accordingly.

## Installation

To get started with the Tic-Tac-Toe game, follow these steps:

1. **Clone the Repository:**
   ```sh
   git clone https://github.com/Aarav-Shah-175/tic-tac-toe.git
   ```

2. **Navigate to the Project Directory:**
   ```sh
   cd tic-tac-toe
   ```

3. **Compile the Code:**
   You will need a C compiler like `gcc` to compile the program.
   ```sh
   gcc -o tic_tac_toe tic_tac_toe.c
   ```

4. **Run the Game:**
   ```sh
   ./tic_tac_toe
   ```

## Usage

1. **Start a New Game:**
   When prompted, press Enter to start a new game.

2. **Make a Move:**
   Players take turns entering a number between 1 and 9 to mark a cell on the board. The numbers correspond to positions on the grid as follows:

   ```
    1 | 2 | 3
   ---|---|---
    4 | 5 | 6
   ---|---|---
    7 | 8 | 9
   ```

3. **Check for a Winner:**
   The game will automatically check for a winner after each move. The game ends when a player wins or all cells are filled, resulting in a draw.

4. **Exit the Game:**
   To exit the game, press 'E' when prompted.

---
