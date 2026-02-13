
// Till now we have seen that C++ Program can only interact with I/O Devices through ( cin>>  and    cout<< ) means interaction with monitor and keyboard
// But C++ program can also interact with Files and (Read and Write) data in the file.

//                                  +---------------------+
//                                  |      C++ Program    |
//                                  +---------------------+
//                                            |
//                                            v
//               +----------------------------+-------------------------------+
//               |                                                            |
//        +-------------+                                              +-------------+
//        |   Devices   |                                              |    Files    |
//        +-------------+                                              +-------------+
//               |                                                           |
//               v                                                           v
//         +-----------------+                                       +-----------------+
//         |    File Input   |                                       |    File Output  |
//         +-----------------+                                       +-----------------+
//                  |                                                           |
//      +----------------------+                                    +------------------+
//      |                      |                                    |                  |
//  +------------+       +-------------+                  +---------------+      +---------------+
//  |   cin >>   |       |   cout <<   |                  |   File Read   |      |  File Write   |
//  | (for input)|       | (for output)|                  +---------------+      +---------------+
//  +------------+       +-------------+                                                 |
//          |                   ^                                                        v
//          v                   |                                                +------------------+
//  +----------------+   +------------------+                                    |   File Output    |
//  | Console Input  |   | Console Output   |                                    +------------------+
//  |   -> Keyboard  |   |   -> Monitor     |        
//  +----------------+   +------------------+        

