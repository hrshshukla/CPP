/* 

Code
int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a << "  “ << b << endl;

Options: (1) 7 17 (2) 17 7 (3) 7 7 (4) 17 17
Answer: 7 7
Explanation: c stores the address of variable b. Then, value of the address stored in c (which is of b) is updated to 7 (that is b = 7).

Code
int a = 50;
int *ptr = &a;
int *q = ptr;
(*q)++;
cout << a << endl;

Options: (1) 50 (2) 51 (3) Error (4) None of these
Answer: 51
Explanation: ptr points to a. q points to ptr directly and to a through ptr. *q = value of p address, and p = value of a address. So, (*q)++ increments the value at the address of a. So a becomes 51 from 50.

Code
int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;

Options: (1) 10 (2) 0 (3) Error (4) None of these
Answer: Error
Explanation: when compiler search for address "10" which didn't exist in memmory because usually address in memory looks like --> (0x61ff04). Hence "10" cannot be stored in (*ptr) because it doesnt exist = ERRRO


Code
int a = 7;
int b = 17;
int *c = &b; 
a = *c;
*c = *c + 1;
cout  << a << "  " << b << endl;

Options: (1) 18 18 (2) 7 18 (3) 17 17 (4) 17 18
Answer: 17 18
Explanation: c points to b. a has the value at the address stored in c, which is of b (17). Value at address stored in c is incremented by 1 (b = 17 + 1 = 18).

Code
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << “ “ << f << “ “ << p;

Options: (1) 2.5 10.5 2.5 (2) 2.5 11.5 2.5 (3) 2.5 2.5 2.5 (4) 11.5 11.5 2.5
Answer: 2.5 2.5 2.5
Explanation: ptr points to f. f is incremented by 1 through ptr (f = 11.5 now). f = p using ptr (f = 2.5 now).


Code
int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;

Options: (1) Garbage_value 7 (2) 7 Garbage_value (3) 88 (4) 77
Answer: 7 Garbage_value 
Explanation: c stores the address of a (and points to the value of a). address that c stores is incremented by 1, so now it points to an unknown value.


*/