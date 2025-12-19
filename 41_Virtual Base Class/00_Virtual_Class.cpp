// When we create a Class A 
// Then, we inherit (2) derived classes from (Class A)-----> [(Class B) (Class C)]
// And finally, we use multiple inheritance and inherit (1) class from combining [(Class B) (Class C)]-------> Class D
                              
/*

                                                +-------------------+
                                                |      Class A      |
                                                |  +-------------+  |
                                                |  |  int a;     |  |
                                                |  +-------------+  |
                                                +-------------------+
                                                         |
                                            +------------+-------------+
                                            |                          |
                                    +-------------------+       +-------------------+
                                    |      Class B      |       |      Class C      |
                                    |  +-------------+  |       |  +-------------+  |
                                    |  |  int a;     |  |       |  |  int a;     |  |
                                    |  +-------------+  |       |  +-------------+  |
                                    +-------------------+       +-------------------+
                                            |                          |
                                            +------------+-------------+
                                                         |
                                                +-------------------+
                                                |      Class D      |
                                                |  +-------------+  |
                                                |  |  int a;     |  |<------------ ERROR
                                                |  |  int a;     |  |<------------ ERROR 
                                                |  +-------------+  |
                                                +-------------------+

-------------> As we can see there are (2) int a; got copied from (Class A) -----> [(Class B) (Class C)] ------> (Class D)
-------------> This multiple (int a;) in (Class D) will confuse the complier which one to use 
-------------> This leads to problem of Duplication and Ambiguity 

-------------> SOLUTION : virtual base class 
-------------> By using virtual class base (Class A) ka (int a;) sirf ek hi baar copy hoga (Inherit hoga) uske baad nhi hoga 
-------------> SYNTAX : class {derived class name} : virtual {base class name}{
                                
                            public:
                                
                            };


*/