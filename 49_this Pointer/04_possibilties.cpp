
// Difference in Address and Reference 
// int *ptr = &a --------> address of (a) Address Method
// int &ref = a  --------> (ref) become alias of (a). Now if I do, (ref = 5) then (a) will also become (a = 5) because both have same memory location
// Address or Reference memory ke same address ko access krte hai par tareeka alag hai dono ka 

Complex setData(int a) { // --------> Function retrun type : Only Object
    this->a = a;
    return *this;  // Copy return hoga (naya object create hoga) like (copy_One)
                   // Here (*this = copy_One) (return type = Object ) = copy_One 
}


Complex& setData(int a) { // --------> function return type : reference of the object. Toh phir (*this) ka ky kaam ----> (this) btayega ki current object (One) ka hi referance return krna hai
    this->a = a;
    return *this;  // -------> Current object ka reference return kar raha hai
                   // Here (*this = ref_One) + (return type = &) = &ref_One (object ka reference)
}



Complex* setData(int a) { // --------> function return type : pointer 
    this->a = a;
    return this;  // -------> Current object ka address return kar raha hai
                  // Here (this = &One)  = &One (object ka address)
}

(2) wale me humne function hi aisa banya ki refrence hi return karega (Complex&). toh ab (One) return nhi hoga instead uska ek refrence banega.
 Kuch aise (int &ref_One = One) ------> aur ye (ref_One) hi pass hoga 
 Aur q ki return (*this) = (One) tha toh ab (One) ka reference isi line me banega jaise ki (int &ref_One = One)
 Process : (*this) reference --------> (One)refrence -------> (int &ref_One = One) -------> ref_One


Lekin
(3) wale me hume pointer hi return krna padega toh sirf (this) return kr dia q ki (this) ek pointer hai.
Aur q ki (this) = (&One) called as returning address of (One)
Process : (this) = (&One)

Conclusion : Jab function object ka refrence return krta hai (&) toh pehle returning value ko refrence me convert hogi phir pass hogi
             Aur jab function object ka address (pointer) return krta hai (*) tab returning value ek pointer hi honi chiye 
