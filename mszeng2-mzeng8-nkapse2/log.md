# Development Log

## 4/3/2022
1. The goal for this week was to create a sound final project plan and select algorithms that seemed interesting and reasonable to implement.
2. Nikhil Kapse: I found an application of graph coloring in Sudoku and researched the alogrithms that would be involved in this project, which included a backtracking recursive graph coloring example and how to represent a Sudoku board using a graph.  
Michael Zeng: I spent my time initially trying to clean up data for the Schedule planner idea which we threw out. After realizing that the Sudoku solver was far more approachable and offered larger datasets I rewrote the timeline so we could get our new proposal checked. 
4. The primary problem we encountered was our misunderstanding of the final project proposal initially: we initially proposed an AVL tree structure, when we were expected to implement a more complex graph. We solved the issue promptly and found a more appropriate application of graph theory for our proposal.
5. We plan to implement the basic graph data structure over the next week and begin implementing the Sudoko board csv file parsing function. 

## 4/10/2022
1. The goal for this week was to parse the csv file of Sudoku boards and begin the graph representation of the Sudoku board.
2. Nikhil Kapse: I wrote a constructor for our Sudoku Board class which parses the csv file of Sudoku boards, and stores the boards in a graph represented by an adjacency list. The adjacency list representation is not fully complete yet, but is very close.
3. The main problem encountered regarding the Sudoku Board representation was deciding on an appropriate graph representation, but I determined that 2d arrays of integers would be most apt for space and time-complexity given this application. 
4. Next week, we plan to implement any relevant graph manipulation functions and complete most of the graph coloring algorithm.

## 5/1/2022
1. The graph coloring algorithm is almost complete, this week we tried a different approach that will hopefully solve the rest of our test cases. Finished implementing all data cleaning functions as well as simple test cases to catch errors in data. Adjacency matrix is completed and fully represents the Sudoku Board edges and vertices.
2. Finished data parsers' cleaning pipeline with the use of helper functions that removes faulty input data.
3. Finished DFS traversal of the graph that prints the coordinates of the given numbers before the puzzle is solved.
4. The main problem we encountered this week was that we did not have a strong heuristic for the visiting order of our greedy graph coloring algorithm, which we remdied by using the saturation degree of each node. 
5. This week, we will finish up the graph coloring algorithm and the k-core algorithm.
