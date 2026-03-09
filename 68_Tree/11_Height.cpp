
// height formula -> height = 1 + max( height of left node, height of right node) 
// Let's verify.....

// ------------------------------------------------------------------
// Case 1 -> Only One Node in Tree

// Every new node that is inserted, brings height of +1
// example :    90
//              / \
//           NULL  NULL

// Height => 1 + max(NULL, NULL);
//        => 1 + NULL
//        => 1


// ------------------------------------------------------------------
// Case 2 -> Multiple Nodes in Tree

//           30(H=2)
//           /      \
//      20(H=1)      40(H=1)
//      /    \          /  \
//   NULL    NULL    NULL   NULL

// Node(30) :
// height => 1 + max( Node(20), Node(30) );
//        => 1 + max (1 , 1)
//        => 1 + 1
//        => 2
