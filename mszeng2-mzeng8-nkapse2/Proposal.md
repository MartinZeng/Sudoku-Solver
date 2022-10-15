# Project Proposal
## Leading Question
Given the selection of a particular sudoku puzzle, if the puzzle is solvable, what is the solution to the puzzle?

## Dataset
We will be using a dataset of the first 10,000 Sudoku games derived from a [dataset](https://www.kaggle.com/datasets/bryanpark/sudoku?resource=download) of 1 million games. The selected game will be parsed from its CSV format and converted into an undirected graph representation in which each vertex represents a cell on the Sudoku board and each edge represents a connection to identical rows/columns. 

A valid board is constituted by a string of 81 integers, and any other length or content will be considered invalid.

## Algorithms
We will be using a graph coloring algorithm to determine whether a given Sudoku board is solvable(the expected chromatic number is 9, and anything greater indicates the board is unsolvable). In addition, we will color the graph so as to solve the board by finding 9 unique numbers/colors that fill rows/columns and the relevant 3x3 subgrids on the board. We will be using a backtracking algorithm, so the graph coloring algorithm is expected to have a time complexity of O(m^V) where m is the number of colors(expected to be 9 for Sudoku boards) and V is the number of vertices in the graph(81 for a valid board). Lastly, we will implement a DFS traversal that will have a Big O of O(V + E) where V is the number of vertices and E is the number of edges in the graph. The space complexity for both of the aforemention algorithms will be O(V) as a result of the space of the array required to save the relevant information.  

In addition, we will implement an algorith that returns a k-core of our graph representation. The k-core will be defined as the maximal subgraph such that every vertex has at least degree k. The time complexity for this algorithm can be described as O(V + E) where V is the number of vertices and E is the number of edges, and the space complexity is also O(V + E) since the worst-case space complexity requires storage of the original graph. 

The Sudoku board csv input representations will entail that 0 entails an empty cell, and other digits represent non-empty cells. Thus, an 81-length string can represent a Sudoku board. When boards are outputted in the console for the user, they will be formatted ASCII-style to indicate the 9x9 cell structure. 

## Timeline(6 weeks)
Week 1: Process data from .csv to .txt and develop method to manipulate data in C++
Week 2,3: Build basic graph with all nodes and implement necessary methods to interact with graph(find, insert, delete)
Week 4: Implement graph coloring and DFS traversal
Week 5: Design Function input and output. Such as UI elements and how info will be taken in/presented
Week 6: Write the README, report, and final presentation

