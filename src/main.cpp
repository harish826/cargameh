
#include <stdio.h>
#include <conio.h>

int main() {
    int carPosition = 3;
    int roadWidth = 7;
    int gameover = 0;
    char move;

    while (!gameover) {
        for (int i = 0; i < roadWidth; i++) {
            if (i == carPosition) {
                printf("*");
            } else {
                printf("_");
            }
        }
        printf("\n");

        if (kbhit()) {
            move = getch();
            if (move == 'a' && carPosition > 0) {
                carPosition--;
            } else if (move == 'd' && carPosition < roadWidth - 1) {
                carPosition++;
            } else if (move == 'q') {
                gameover = 1;
            }
        }

        // Logic to check collision
        // Implement your logic here to check collision and end the game if collision occurs

        // Delay to slow down the game
        for (int i = 0; i < 10000000; i++) {}

        // Clear screen for the next iteration
        system("cls");
    }

    printf("Game Over!");

    return 0;
}
