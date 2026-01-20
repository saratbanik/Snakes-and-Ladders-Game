# Snakes & Ladders Game

## Project Description
This project is a console-based implementation of the traditional Snakes & Ladders game developed using the C programming language. The game simulates dice rolls, player movement, and the effects of snakes and ladders on a standard 100-square board.

The objective of the game is for the player to reach exactly position 100. The project demonstrates the use of control structures, functions, random number generation, and modular programming concepts in C.

## Objectives
- To design and implement a logical game system using C
- To simulate real-life Snakes & Ladders gameplay in a console environment
- To understand function-based programming and randomness using rand()
- To strengthen problem-solving and algorithmic thinking skills

## Game Rules
- The player starts at position 0
- A six-faced dice is rolled on each turn
- Player moves forward based on the dice value
- Landing on:
     - Ladder base → player climbs up
     - Snake head → player slides down
- The player must land exactly on square 100 to win
- If a dice roll exceeds 100, the move is cancelled
- Player can quit the game anytime by pressing q

## Features
- Random dice rolling using rand() and srand()
- Predefined snakes and ladders logic
- Input validation for user actions
- Console-based interactive gameplay
- Clear win and exit conditions

## Algorithm Summary
1. Initialize player position to 0
2. Seed the random number generator
3. Prompt the user to roll the dice or quit
4. Generate dice value (1–6)
5. Update player position
6. Check for snake or ladder
7. Validate winning condition
8. Repeat until player wins or exits

## Technologies Used
- Language: C
- Libraries: stdio.h, stdlib.h, time.h
- Platform: Command Line / Terminal
- Compiler: GCC

## Sample Output
- Displays current player position
- Shows dice roll result
- Indicates snake or ladder movement
- Declares winner upon reaching position 100

## Future Enhancements
- Multiplayer support
- Graphical User Interface (GUI)
- Custom board size
- Score tracking and statistics
- Save and resume gameplay

## Priview
![image](https://github.com/saratbanik/Snakes-and-Ladders-Game/blob/main/Image/Preview1.png)
![image](https://github.com/saratbanik/Snakes-and-Ladders-Game/blob/main/Image/Priview2.png)