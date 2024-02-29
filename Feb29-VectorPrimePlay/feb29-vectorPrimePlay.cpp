#include <iostream>

#include"C:/Users/Work/Downloads/VectorPrime.h"

using namespace std;

int main()
{

    //int a = 4235282; 
    //int* pointerToA = &a; //& is the "address of" operator 
    //cout << pointerToA << endl; 
    //cout << &a << endl; 
    //cout << *pointerToA << endl; //* in this case is the "get the contents of address
    //                            //operator"  (dereferencing operator)

    //int* i = new int[10]; //asks for 40 Bytes of "heap memory" 
    //cout << i << endl; 

    //*i = 42; 
    //cout << *i << endl; 

    //i++; 
    //cout << i << endl; 

    //delete[] i; 


    //while (true)
    //{
    //    int* i = new int; //new requests 4 bytes of memory from OS and stores 
    //                        //the starting address of that memory in `i`
    //                        //(RAM - virtual RAM -> hard drive) 
    //    
    //    //missing delete ! (memory leak) 

    //    delete i; 
    //}

    using namespace MySpace::DataStructs;


    //cout << sizeof(char) << "\t" <<  sizeof(int) << "\t" << sizeof(double) << endl; 

    CharVector c1; 
    c1.printVector();

    c1.push('f'); //size = 6 now 
    c1.push('g');//7
    c1.push('h');//8
    c1.push('i');//9
    c1.push('j');//10

    c1.push('k'); //11 > 10 (exceed our INITIAL capacity!) 

    cout << "\n\n";
    c1.printVector(); 

    return 0;
}