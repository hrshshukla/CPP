/* As we know that binary search trees are better than any other tree 
=>  And there time compexity : O(log n), which is better than any usual tree but,

=>  there is a exception where we should not use Binary Search Tree 
=>  And that is when BST start looking like skewed tree 

=>  Example : the binary tree of this -> (1, 7, 11, 21) will look like,
=>             [21]
=>             /
=>          [11] 
=>          /
=>        [7]
=>        /
=>      [1]

=>  Problem : the problem here is that, this tree look like linkedlist and Now to search an element, the worst case time complexity will become O(n)
=>  hence, here using a binary search tree gives us no advantage 
=>  this situation is created because we didnt manage the height of the BST  
=>  the solution to this problem will be -> A Binary search tree whose height is balanced 
=>  And A binary search tree having balanced height is called AVL tree 



        Skewed BST (Unbalanced)           AVL Tree (Balanced)
        ------------------------          ------------------------
            10                                 30
              \                               /  \
              20                            20    40
                \                          /        \
                30                       10         50
                  \
                  40
                    \
                    50


=>  +----------------+------------------------+----------------------------------+
=>  |    Feature     |          BST           |           AVL Tree               |
=>  +----------------+------------------------+----------------------------------+
=>  | Balance        | ❌ Not guaranteed      | ✅ Always balanced               |
=>  | Worst-case     | ❌ O(n)                | ✅ O(log n)                      |
=>  | Use case       | OK for random data     | ✅ Best when insert/delete often |
=>  | Extra work     | ❌ No balancing        | ✅ Needs rotations               |
=>  | Shape example  | Skewed like a chain    | Balanced like a pyramid/tree     |
=>  | Speed effect   | Slow due to long path  | Fast due to short height         |
=>  +----------------+------------------------+----------------------------------+



=>  Full form : Adelson-Velsky and Landis (AVL)                                                                                                                          */