# mszeng2-mzeng8-nkapse2
# Locations
* ## /src
    * Code: main.cpp; SudokuBoard.cpp; SudokuBoard.h
    * Tests: test.cpp
    * Data: dataset.csv; datasetTEST.csv(for test.cpp)
* ## Written report and presentation video
    * n/a
# Setup
To run the main source code:
```
cd src
g++ -Wall -Werror -std=c++11 main.cpp SudokuBoard.cpp SudokuBoard.h -o sudoku
./sudoku dataset.csv
```
To run tests:
```
cd src
g++ -Wall -Werror -std=c++11 SudokuBoard.cpp test.cpp -o test
./test
```
* tests checks for:
    * correct board size
    * program's solution against known solution
    * data cleaning and parsing functionality


