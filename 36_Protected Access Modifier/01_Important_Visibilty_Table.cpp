/*
 Till now we have learned only Public and Private access modifiers, But there is one more called Protected 
 Protected : 
 -----------> It gives security like Private, Means you cannot direclty access data inside it like in Private. But,
 -----------> It is Inhertable means you can copy the data inside it into Derived class 
 -----------> Mtlb ek aisa modifier jo security toh PRIVATE jaise di par Inherit hojaye 


For a protected member:

|----------------------|--------------------|--------------------|---------------------|
|                      | Public Derivation  | Private Derivation | Protected Derivation|
|----------------------|--------------------|--------------------|---------------------|
| 1. Private members   |  Not Inherited     | Not Inherited      | Not Inherited       |
| 2. Protected members |   Protected        | Private            | Protected           |
| 3. Public members    |   Public           | Private            | Protected           |
|----------------------|--------------------|--------------------|---------------------|


*/
