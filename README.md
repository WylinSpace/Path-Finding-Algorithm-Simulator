# Pathfinding Game with Automated and Manual Controls

## Introduction

In this project, I implement a grid-based game that allows movement of a starting character, denoted as "S," to the end goal, denoted as "E," either by manual control or automated pathfinding. The grid is represented as a matrix with obstacles denoted by "X" and open spaces by spaces. The goal is to navigate through the grid and find the shortest path using a variety of movement options.

---

## Key Features

1. **Grid Representation**: The grid is a 10x10 matrix where each cell can either be empty, contain an obstacle, or represent the starting or ending points.
   
2. **Manual Control**: Players can move the "S" character through the grid by entering movement commands such as "Up," "Down," "Left," "Right," etc. The movement is restricted by obstacles and boundaries.

3. **Automated Control (Pathfinding)**: The game uses a pathfinding algorithm (Breadth-First Search, BFS) to find the shortest path from the start ("S") to the end ("E") while avoiding obstacles.
   - Breadth-First Search (BFS) is a graph traversal algorithm that explores nodes layer by layer, ensuring that it visits all nodes at the current "depth" before moving to the next. BFS is particularly useful for finding the shortest path in an unweighted graph, such as our grid-based game.
   - In this game, the grid is modeled as a graph where:
   - Each cell is a node.
   - Movement between adjacent cells (vertical, horizontal, or diagonal) represents an edge.
   - How BFS Works in the Game
      i.    Initialization:
            BFS starts from the "S" position (start point). A queue is used to keep track of nodes (cells) to visit next. Each node stores its coordinates and the current path length (distance from "S").

      ii.   Neighbors Exploration:
            BFS examines all valid neighboring cells (up, down, left, right, and diagonals) from the current position:

            A neighbor is valid if it:
            Is within the grid boundaries.
            Is not blocked by an obstacle ("X").
            Has not been visited before.
      
      iii.  Queue Management:

            Valid neighbors are added to the queue for further exploration.
            Once a cell is added to the queue, it is marked as visited to prevent redundant checks.
      
      iv.   End Point Detection:
            If BFS reaches the "E" cell, the shortest path from "S" to "E" is found, and the algorithm stops.
            Path Reconstruction:
            If needed, BFS can reconstruct the path by keeping track of each node's predecessor (the cell that led to it).
      
      v.    Result:
            If the queue becomes empty without finding "E," there is no path to the goal.

4. **Complexity**: Time Complexity of BFS in a Grid-Based Pathfinding Game
   The time complexity of BFS depends on the number of nodes (cells) and the edges (connections between cells) in the graph.
   - Number of Nodes (N): each empty cell represent a node, Therefore a nxm grid should have nxm nodes.
   - Number of Edges: Each node can have up to 8 edges, corresponding to the 8 possible movement directions (up, down, left, right, and diagonals). However, obstacles ("X") and boundaries reduce the effective edges for some nodes.
   - Time complexity formula is given by O(N x E)

5. **Movement Directions**: The directions can be vertical, horizontal, or diagonal. The directions are mapped to numerical codes:
   - **1**: Lower Left
   - **2**: Lower
   - **3**: Lower Right
   - **4**: Left
   - **6**: Right
   - **7**: Upper Left
   - **8**: Up
   - **9**: Upper Right

6. **Visual Representation**: The grid is displayed on the console with color-coded cells:
   - Green: Start ("S") and End ("E")
   - Red: Obstacles ("X")
   - White: Empty Spaces

7. **Code Strength**:
   - Visualized simulation with build in moving logic
      i.    The code has build in movement logic, where movement outside of the grid is not allowed, and moving accross the "X" is not allowed
      ii.   This provide a strong foundation for algoritm implementation. Which alalow the user to do simulation with any desired algorithm.   
   
   - Versatile for any other map input with only minor adjustment
      i.    The map is set to be a variable string array, the map can be changes directly through the changes in the .csv file and const string in main.hpp
      ii.   The user can change the map freely and execute the algorithm, even when the dimension of map changes
   
   - Could be able to move freely, in all direction
      i.    This software consider the fastest path in terms of movement count instead of length. Therefore, movement in diagonal is considered too.
      ii.   This provide a more optimized movement, as constant diagonal movement is far better than turbullar movement.
   
   - User could input the control as well
      i.    One function is build for user to control the "S" manually.


8. **Code Short Coming**: 
   - The code only can handle 1 endpoint by the time.
      i.    The code is designed to scan the position of "S" and "E" first, by recording their respecting coordinate, the fastest path can be calculated based on the coordinate and the bock.
      
      ii.   Howoever, this indicate that only one "E" can be handled by this code.
      
      iii.  Major changes need to be done to adapt the situation where more than one "E" existed on the map.
   
   - The fastest path found is not usually the most efficient path
      i.    Fastest path may be a turbullar one: that is not efficient for acceleration as constant changes in direction to achieve the "Shortest Path".
      
      ii.   Reduce in speed may weaken the effect of choosing the shortest path, as even if travelling in shortest path could result in travelling in slower speed.


9. **Future Plan on the Code**: 
   - Adding point awarding system for consistency movement in one direction
      i.    Luckily, the system here is build based on the tree map/graph that is same weighted.
      ii.   Therefore, a system that considered and award the consistency movement in same direction can be added, so that the optimum yet shortest path can be found.
      iii.  For example, last movement direction can be stored, and if the next travelling direction is same as the last travelling direction, then the weight of the path length will be shorter than the path length of other direction.
      iv.   This is because the algorithm only calculate the shortest path, and time is not a consideration in the system.
      v.    By mutating the algorithm by adding addional length for the path to each node(if the travel direction to the cell is not as the same as the last one), an optimum path could be found theoritically.
   
   - Algorithm that provide more than one path for simultaneous movement
      i.    More than one path can be found to allow simultaneous movement at once.
   
   - Allow the postman to send more than 1 parcel at one time, with weight and urgency level considered
      i.    This involved in adding snippets in the urgency level sorting system.
      ii.   After sorting the urgency level, another sorting can be done again to arrange the parcel to be sent, and combined the parcel that with small weight (not exceeded the weight threshold) to optimized the parcel delievery.

   - Handling more than one endpoint
      i.    The program will not end after achieving the first endpoint.
      ii.   The scanning of the E will be done and the coordinate will be recorded for each "E"
      iii.  The distance from E and S will be sorted accroding to the path length, and will travelled according to the path length(Shortest/achievable will come first, then go to the second end point.) 

## Code Walkthrough

### Grid Setup

The grid is initialized as a 10x10 matrix, where each cell is either empty (`" "`), blocked by an obstacle (`"X"`), the starting point (`"S"`), or the ending point (`"E"`). This grid is represented as an array of strings.

Snippet for MAP:
string DynamicMap[10][10] = { 
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "},
    {" "," "," "," "," "," "," "," "," "," "}
};

