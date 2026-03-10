#include <iostream>

using namespace std;

// Step 1: Create the graph as a 7x7 adjacency matrix
int graph[7][7] = {                //   0—— 1
        {0,1,1,1,0,0,0},           //   | \ |
        {1,0,1,0,0,0,0},           //   3—— 2
        {1,1,0,1,1,0,0},           //    \ /
        {1,0,1,0,1,0,0},           //     4
        {0,0,1,1,0,1,1},           //    / \ 
        {0,0,0,0,1,0,0},           //   5   6
        {0,0,0,0,1,0,0}
    };

int visited[7] = {0,0,0,0,0,0,0};  // 0 = not visited, 1 = visited
int visitedSize = sizeof(visited) / sizeof(visited[0]);

void DFS(int crrSourceNode){

    visited[crrSourceNode] = 1;
    cout << crrSourceNode << " ";

    for (int neighbour = 0; neighbour < visitedSize; neighbour++)
    {
        if (graph[crrSourceNode][neighbour] == 1 && visited[neighbour] == 0)
        {
            DFS(neighbour);
        }
    }
}
    
    
int main(){

    DFS(0);

// -> Working : 

// Call DFS(0)
//     Call DFS(1)
//         Call DFS(2)
//             Call DFS(3)
//                 Call DFS(4)
//                     Call DFS(5) — (no more neighbors)
//                     Return to 4
//                     Call DFS(6) — (no more neighbors)
//                     Return to 4
//                 Return to 3
//             Return to 2
//         Return to 1
//     Return to 0
// Done

    return 0;
}
