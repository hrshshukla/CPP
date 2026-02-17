# Difference between `map` and `unordered_map` in C++

+--------------------------+-------------------------------------------------+-------------------------------------------------+
| Feature                  | `map`                                           | `unordered_map`                                 |
|--------------------------|-------------------------------------------------|-------------------------------------------------|
| **Underlying Structure** | Red-Black Tree (Balanced BST)                   | Hash Table                                      |
| **Order**                | Ordered (sorted by keys)                        | Unordered (no specific order)                   |
| **Insertion Time**       | `O(log n)`                                      | `O(1)` average (`O(n)` worst case)              |
| **Search Time**          | `O(log n)`                                      | `O(1)` average (`O(n)` worst case)              |
| **Deletion Time**        | `O(log n)`                                      | `O(1)` average (`O(n)` worst case)              |
| **Key Requirement**      | Must be comparable (`<` operator needed)        | Must be hashable (hash function + `==` needed)  |
| **Storage**              | Key-Value pairs (like a dictionary)             | Key-Value pairs (like a dictionary)             |
| **Memory Usage**         | Lower (compact tree structure)                  | Slightly higher (hash table overhead)           |
| **Best Use Case**        | Need sorted data or range-based queries         | Need very fast access without caring about order|
+--------------------------+-------------------------------------------------+-------------------------------------------------+