// Diagram : 
//                  50
//                 /  \
//               30    70
//              / \    / \
//            20  40  30  80
//           /\   /\  /\   /\
//          N N  N N  N N  N N
            
// Rule 1 : All values in the left subtree must be less than the currentRoot node and main root node.
// Rule 2 : All values in the right subtree must be greater than the currentRoot node and main root node.
// Rule 3 : There should be no duplicate nodes 
// Tip : In BST when we perform InOder Traversal we get sorted values  

// ------------------------------------------------------------------------------------------------------

// Height : Height = Number of edges from root node to deepest leaf node.
//          In Binary search tree for (n) number of nodes the height will be (log n) 
//          Exception Case : skewed BST 

// Example : 
//                  50
//                 /  \
//               30    70
//              / \    / \
//            20  40  30  80

// total no. Nodes = 7 
// Height =>  log2(No. of nodes) 
//        =>  log2(7) 
//        =>  2.8
//        =>  2

// ---------------------------------------------------------------------------------------------------------------

// Time Complexity :
// as the height binary search tree is (log n) the time complexity is also (log n)
// example : 


// -> the time complexity of operations like searching, inserting, deleting node in binary search tree = O(height of BST)
//                                                                                                     = O(h)
//                                                                      As we keep dividing the tree   = O(log n)