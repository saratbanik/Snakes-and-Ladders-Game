#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WINNING_POSITION 100
// Function prototypes
int rollDice();
int checkForSnakeOrLadder(int position);
int main() {
int playerPosition = 0;
char choice;
// Seed the random number generator
srand(time(0));
printf("\nWelcome to Snakes and Ladders!\n");
printf("Reach position 100 to win the game.\n");
printf("Press 'r' to roll the dice and 'q' to quit.\n\n");
while (playerPosition < WINNING_POSITION) {
printf("Your current position: %d\n", playerPosition);
printf("Enter your choice (r to roll, q to quit): ");
scanf(" %c", &choice);
if (choice == 'q') {
printf("Thanks for playing! Goodbye.\n");
break;
} else if (choice == 'r') {
int dice = rollDice();
printf("You rolled a %d\n", dice);
playerPosition += dice;
if (playerPosition > WINNING_POSITION) {
playerPosition -= dice; // Revert move if it exceeds 100
printf("You need exactly %d to win.\n", WINNING_POSITION - playerPosition);
} else {
playerPosition = checkForSnakeOrLadder(playerPosition);
}
if (playerPosition == WINNING_POSITION) {
printf("Congratulations! You've reached position 100 and won the game!\n");
break;
}
} else {
printf("Invalid input. Please press 'r' to roll or 'q' to quit.\n");
}
}
return 0;
}
int rollDice() {
return (rand() % 6) + 1; // Random number between 1 and 6
}

int checkForSnakeOrLadder(int position) {
// Snakes and ladders positions
switch (position) {
case 4: return 14; // Ladder
case 9: return 31; // Ladder
case 17: return 7; // Snake
case 20: return 38; // Ladder
case 28: return 84; // Ladder
case 40: return 59; // Ladder
case 51: return 67; // Ladder
case 54: return 34; // Snake
case 62: return 19; // Snake
case 63: return 81; // Ladder
case 64: return 60; // Snake
case 71: return 91; // Ladder
case 87: return 24; // Snake
case 93: return 73; // Snake
case 95: return 75; // Snake
case 99: return 78; // Snake
default: return position; // No snake or ladder
}
}