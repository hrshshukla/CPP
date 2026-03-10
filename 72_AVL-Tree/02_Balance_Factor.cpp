// Balanced Factor =  height(left) - height(right) 
// if Balanced Factor is [-1, 0, or 1] then it's a → ✅ Balanced AVL Tree

// Example 1: Balanced Node (|BF| ≤ 1)
// -----------------------------------
//            30(H=2)
//           /      \
//      20(H=1)      40(H=1)
//      /    \          /   \
//   NULL    NULL    NULL   NULL
//  (H=0)   (H=0)   (H=0)   (H=0)



// BF(30) = height(left node) - height(right node)
//        = 1 - 1 = 0  ✅ Balanced

//         30(BF=0)
//        /      \
//    20(BF=0)   40(BF=0)



// Example 2: Still Balanced ??
// -------------------------
//         30(BF=2)
//        /  
//      20(BF=1)
//     /     
//   10(BF=0) 

// BF(30) = 2 (left-heavy)
// MOD(2) = 2 ❌ Not allowed → ❌ Needs Rotation

// Before rotation (Unbalanced):
//         30(BF=2)
//        /
//      20(BF=1)
//     /
//   10(BF=0)

// After rotation (Balanced AVL):
//         20(BF=0)
//        /   \
//     10(BF=0) 30(BF=0)

// Now, all MOD(BF) ≤ 1 ✅ Balanced again!


// node->height = (height of left child) - (height of right child)
//                              O/R
// node->height = 1 + max(height of left child, height of right child);