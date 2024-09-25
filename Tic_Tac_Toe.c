#include <stdio.h>
#include <string.h>

char board[4][4];

int checkwinner(char a) {
  if (board[0][0] == a && board[1][0] == a && board[2][0] == a ||
    board[0][1] == a && board[1][1] == a && board[2][1] == a ||
    board[0][2] == a && board[1][2] == a && board[2][2] == a) {
    return 1;
  } else if (board[0][0] == a && board[0][1] == a && board[0][2] == a ||
    board[1][0] == a && board[1][1] == a && board[1][2] == a ||
    board[2][0] == a && board[2][1] == a && board[2][2] == a) {
    return 1;
  } else if (board[0][0] == a && board[1][1] == a && board[2][2] == a ||
    board[0][2] == a && board[1][1] == a && board[2][0] == a) {
    return 1;
  } else {
    return 0;
  }
}

void fill() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }
}

int play(int box, char a) {
  int row = (box - 1) / 3;
  int col = (box - 1) % 3;
  if (board[row][col] != ' ') {
    return 1;
  } else {
    board[row][col] = a;
    return 0;
  }
}

void display() {
  printf("\n %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
  printf("---|---|---\n");
  printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
  printf("---|---|---\n");
  printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
}

int main() {
  printf("\nWelcome to Tic Tac Toe\n\n");

  printf(" 1 | 2 | 3 \n");
  printf("---|---|---\n");
  printf(" 4 | 5 | 6 \n");
  printf("---|---|---\n");
  printf(" 7 | 8 | 9 ");

  char instruction;
  while (1) {
    fill();
    printf("\n\n1. Press Enter to start a new game.\n2. Press E to exit.\n-->");
    scanf("%c", & instruction);
    if (instruction == '\n') {

      int count = 0;
      int result = 0;
      while (!result && count < 9) {
        int cell;
        if (count % 2 == 0) {
          printf("\n\nEnter the number to mark (O):  ");
          scanf("%d", & cell);
          getchar();
          if (cell > 0 && cell < 10) {
            if (play(cell, 'O')) {
              printf("\nBlock already filled");
              continue;
            } else {
              play(cell, 'O');
              display();
              count++;
            }

            if (checkwinner('O')) {
              printf("\n\nCongratulations O won!!!\n");
              result = 1;
            } else {
              continue;
            }
          } else {
            printf("\nInvalid Input");
            continue;
          }
        } else {
          printf("\n\nEnter the number to mark (X):  ");
          scanf("%d", & cell);
          getchar();
          if (cell > 0 && cell < 10) {
            if (play(cell, 'X')) {
              printf("\nBlock already filled");
              continue;
            } else {
              play(cell, 'X');
              display();
              count++;
            }

            if (checkwinner('X')) {
              printf("\n\nCongratulations X won!!!\n");
              result = 1;
            } else {
              continue;
            }
          } else {
            printf("\nInvalid Input");
            continue;
          }
        }
        if (!result) {
          printf("\n\nIt is a DRAW!!");
        }
      }
    } else if (instruction == 'E' || instruction== 'e') {
      printf("\nThanks for Playing!\n");
      printf("------------------------------");

      break;
    }
  }
}
