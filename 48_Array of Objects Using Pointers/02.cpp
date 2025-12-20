 // Improved version of 01.cpp
 
 
 for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item : " << i+1 << endl;
        cin>>id>>price;
        
        (ptr+i)->setData(id, price);// -------> Direct solution (ptr+i) instead of making this (shopItem* Double_ptr = ptr;) 
       
    }

// Function to print each object
    for(int j = 0; j < size; j++)
    {
        (ptr+j)->printData();
        
    }

    return 0;
}