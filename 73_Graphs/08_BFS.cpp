// Dry run below the code 

#include <iostream>
#include <queue> // Using Queue 

using namespace std;

int main(){

    // Step 1: Create the graph as a 7x7 adjacency matrix
    int graph[7][7] = {            //   0—— 1
        {0,1,1,1,0,0,0},           //   | \ |
        {1,0,1,0,0,0,0},           //   3—— 2
        {1,1,0,1,1,0,0},           //    \ /
        {1,0,1,0,1,0,0},           //     4
        {0,0,1,1,0,1,1},           //    / \ 
        {0,0,0,0,1,0,0},           //   5   6
        {0,0,0,0,1,0,0}
    };
    
    // Step 2: Initialize visited array with 0 for each node (means not visited)
    int visited[7] = {0,0,0,0,0,0,0};  // 0 = not visited, 1 = visited
    int visitedSize = sizeof(visited) / sizeof(visited[0]);

    // Step 3 : Start with any node, here we took -> node(0)
    int sourceNode = 0;                

    // Step 4 : Create a queue to manage pop -> (explored nodes) and push -> (unexplored nodes)  
    queue<int> Q;

    // Step 5 : mark the intial source node as visited and push into queue 
    visited[sourceNode] = 1; 
    cout << sourceNode << " ";
    Q.push(sourceNode);

    // Step 6 : Run this loop for each node inside the Queue (further more nodes will be add automatically) 
    while (!Q.empty())
    {
        int currSourceNode = Q.front(); // store the node in the front of queue, as we are going to pop() then
        Q.pop(); // pop that node 
        
        for (int neighbour = 0; neighbour < visitedSize; neighbour++) // check connection of all nodes with curr source node
        {
            if (graph[currSourceNode][neighbour] == 1 && visited[neighbour] == 0) // if -> (connected with sourceNode) && (not visited) then
            {                                                                     
                cout << neighbour << " ";
                visited[neighbour] = 1;     // then -> mark connected node as visited
                Q.push(neighbour);          // And -> push that connected node into Queue 
            }
        }  
    }
    

    return 0;
}


// +------+----------------+--------------+--------------------------------------------------------+------------------------+----------------+
// | Step | Queue Content  | Current Node | Action                                                 | Visited Array          | Printed Output |
// +------+----------------+--------------+--------------------------------------------------------+------------------------+----------------+
// | 1    | 0              | 0            | Visit neighbors 1,2,3 → Enqueue 1,2,3                  | {1,1,1,1,0,0,0}        | 0 1 2 3        |
// | 2    | 1,2,3          | 1            | Neighbors 0 and 2 already visited → No action          | {1,1,1,1,0,0,0}        | (none)         |
// | 3    | 2,3            | 2            | Visit neighbor 4 → Enqueue 4                           | {1,1,1,1,1,0,0}        | 4              |
// | 4    | 3,4            | 3            | Neighbors 0,2,4 already visited → No action            | {1,1,1,1,1,0,0}        | (none)         |
// | 5    | 4              | 4            | Visit neighbors 5,6 → Enqueue 5,6                      | {1,1,1,1,1,1,1}        | 5 6            |
// | 6    | 5,6            | 5            | Neighbor 4 already visited → No action                 | {1,1,1,1,1,1,1}        | (none)         |
// | 7    | 6              | 6            | Neighbor 4 already visited → No action                 | {1,1,1,1,1,1,1}        | (none)         |
// +------+----------------+--------------+--------------------------------------------------------+------------------------+----------------+
