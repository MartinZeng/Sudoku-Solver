
#include "SudokuBoard.h"
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <stdexcept> 
#include <set>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <chrono>
#include <random>

int main(int argc, char** argv) {

    SudokuBoard board(argv[1], 1);

    int counter = 0;
    auto start = std::chrono::high_resolution_clock::now();
    for(int n = 1; n <= 1000; n++) {
        board = SudokuBoard(argv[1], n);
        if(board.solveGreedy()) {
            board.displayBoard();
            auto stop = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
            counter++;
            std::cout << "Solved " << counter << "/1000 in " << duration.count() << "ms" << std::endl;
        } else {
            std::cout << "Failed to solve " << std::endl;
        }
    }

    // int counter = 0;
    // auto start = std::chrono::high_resolution_clock::now();
    // for(int n = 1; n <= 1; n++) {
    //     board = SudokuBoard(argv[1], n);
    //     //board.displayAdjacency();
    //     if(board.solveBacktracking(board.getAdjacency(),board.getCells())) {
    //         board.displayBoard();
    //         auto stop = std::chrono::high_resolution_clock::now();
    //         auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    //         counter++;
    //         std::cout << "Solved " << counter << "/13000 in " << duration.count() << "ms" << std::endl;
    //     } else {
    //         std::cout << "Failed to solve " << std::endl;
    //     }        
    // }

    // board.displayAdjacency(); 
    //board.DFS();

    return 0;
}