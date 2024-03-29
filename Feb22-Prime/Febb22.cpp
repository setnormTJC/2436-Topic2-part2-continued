#include <iostream>

#include<array> //this is C++'s std library implementation of a "static" array 

#include"C:\Users\Work\Downloads\MyArray.h"

#include<algorithm>

using namespace std;

int main()
{
    //std::sort() //REQUIRES a random-access iterator 

    //std::all_of()

    //double a = 42; 
    //cout << sizeof(double) << endl; 
    //double* pointerToA = &a; 

    //cout << a << "\t" << pointerToA << endl; 
    //pointerToA++; 

    //cout << pointerToA << endl; 
    //std::reverse()

    using namespace MySpace::DataStructs; 

    array<int, 3> stdArray; 
    //char a{}; //UNINITIALIZED!

    //cout << a << endl; //a = 0 here
    //MySpace::DataStructs::MyArray<int, 3> ma1; 
    MyArray<int, 3> ma1; //my array 1 (a STATIC array - AKA: an array whose size CANNOT grow or shrink)
                         //(made with 0 inputs/args -> so this calls default constructor) 
    cout << "Initial contents of ma1: " << endl; 
    ma1.print(); 

    //ma1.modifyElement(2, 13574);
    //cout << "After calling `modifyElement(2, 13574): " << endl; 
    //0, 2 13574? 
    //ma1.print(); 

    //int someCArray[3] = { 1, 2, 3 };

    //someCArray[12] = 223;

    //ma1.modifyElement(1'234, 123'456'789); //out of bounds? OVERWRITES

   // ma1.print(); 
    //int someCArray[2] = {1, 2, 3}
    //cout << ma1.getElementAt(1) << endl; 
    MyArray<int, 7> ma2 = {1, 2, 34, 4, 5, 6, 7};
    cout << "Initial contents of ma2 (constructed with initializer list syntax)" << endl; 
    //ma2.print(); 

    for (int& num : ma2)
    {
        cout << num << " "; 
    }
    cout << "\n";

    ma2.insertElementAt(2, 1234563);
    cout << "After INSERTING that big number at index = 2" << endl; 
    ma2.print(); 


    

    return 0;
}