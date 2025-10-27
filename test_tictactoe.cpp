#include "TicTacToe.h"
#include <iostream>
#include <cassert>

// Students will implement these tests in the lab


void test_initial_state() {
    TicTacToe tictactoe;
    int blankcell;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(tictactoe.getCell(i,j) == ' '){
                blankcell++;
            }
        }
    }
    
    if(tictactoe.getCurrentPlayer() == 'X' && tictactoe.getMoveCount() == 0 && blankcell == 9 && tictactoe.isGameOver() == false){
    std::cout << "✓ Initial state test passed\n";}
}

void test_valid_move() {
    TicTacToe tictactoe;
    originalcount = tictactoe.getMoveCount();
    tictactoe.makeMove(0,0);
    if(tictactoe.getCell(0,0) == 'X'&& tictactoe.getCurrentPlayer() == 'O' && tictactoe.getMoveCount() == originalcount+1){
    std::cout << "✓ Valid move test passed\n";}
}

void test_invalid_moves() {
    TicTacToe tictactoe;
    if(tictactoe.makeMove(0,0) == false && tictactoe.makeMove(1,4) == false && (tictactoe.isGameOver() == true && tictactoe.makeMove(3,3) == false)
    std::cout << "✓ Invalid moves test passed\n";
}

void test_winner_detection_row() {
    TicTacToe tictactoe;
    tictactoe.makeMove(0,0);
    tictactoe.makeMove(1,0);
    tictactoe.makeMove(0,1);
    tictactoe.makeMove(1,1);
    tictactoe.makeMove(0,2);
    if(tictactoe.getWinner() =='X' && tictactoe.isGameOver == true){
    std::cout << "✓ Winner detection (row) test passed\n";}
}

void test_winner_detection_column() {
    TicTacToe tictactoe;
    tictactoe.makeMove(1,1);
    tictactoe.makeMove(0,0);
    tictactoe.makeMove(1,0);
    tictactoe.makeMove(0,1);
    tictactoe.makeMove(2,2);
    tictactoe.makeMove(0,2);
    if(tictactoe.getWinner() == 'O' ' && tictactoe.isGameOver == true){
    std::cout << "✓ Winner detection (column) test passed\n";}
}

void test_winner_detection_diagonal() {
    TicTacToe tictactoe;
    tictactoe.makeMove(0,0);
    tictactoe.makeMove(0,2);
    tictactoe.makeMove(1,1);
    tictactoe.makeMove(0,1);
    tictactoe.makeMove(2,2);
    if(tictactoe.getWinner() == 'X' && tictactoe.isGameOver == true){
    std::cout << "✓ Winner detection (diagonal) test passed\n";}
}

void test_full_board_no_winner() {
    TicTacToe tictactoe;
    tictactoe.makeMove(0,0);
    tictactoe.makeMove(0,1)
    tictactoe.makeMove(0,2);
    tictactoe.makeMove(1,1);
    tictactoe.makeMove(1,0);
    tictactoe.makeMove(1,2);
    tictactoe.makeMove(2,0);
    tictactoe.makeMove(2,1);
    tictactoe.makeMove(2,2);
    if(tictactoe.getWinner() == ' ' && tictactoe.isGameOver == true && tictactoe.isFull == true){
    std::cout << "✓ Full board no winner test passed\n";}
}

int main() {
    std::cout << "Running Tic-Tac-Toe tests...\n\n";

    test_initial_state();
    test_valid_move();
    test_invalid_moves();
    test_winner_detection_row();
    test_winner_detection_column();
    test_winner_detection_diagonal();
    test_full_board_no_winner();

    std::cout << "\nAll tests passed! ✓\n";
    std::cout << "\nNote: These are placeholder tests.\n";
    std::cout << "Students need to implement the actual test logic.\n";

    return 0;
}
