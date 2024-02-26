#include <iostream>
#include<vector>
#include"C:/Users/Work/Downloads/MyArray.h"

#include<array>

#include<list> 

#include<algorithm>

using namespace std;

//class LinkedLIstADT
//{
//    //insert pure virtual fnctions that define what it means to be a "Linked list" 
//};
//
//class LInkedList : public LinkedLIstADT
//{
//
//};


int main()
{
    //std::sort()
    //using namespace A; 
    //cout << a << endl; 


    //MyArray<int, 3> ma1; 
    //ma1.print(); 

    //for (auto num : ma1)
    //{
    //    cout << num << endl; 
    //}
    //MyArray<MyArray<int, 3>, 4> twoD
    //    =
    //{
    //    {1, 2, 3},
    //    {4, 5, 6},
    //    {7, 8, 9},
    //    {10, 11, 12}
    //};

    //for (auto row : twoD)
    //{
    //    for (auto num : row)
    //    {
    //        cout << num << " ";
    //    }
    //    cout << "\n";
    //}
    //
    using namespace MySpace::DataStructs; 
    
    //std::list < list<int>> twoDlist; 


    //int a{}; 
    //cout << a << endl; 

    MyArray<int, 7> jennysNumber = { 8, 6, 7, 5, 3, 0, 9 };

    //MyArray<int, 3> ma2
    //{'a', 'b', 'c' }
    cout << "The initial array contents: \n";
    jennysNumber.print(); 

    jennysNumber.insertElementAt(3, 12345);
    cout << "Updated array - inserted 123456 at index 3: " << endl; 
    jennysNumber.print(); 
    
    MyArray<int, 7> secondNumberList = { 1, 2, 3, 4, 5, 6, 7 };
    //auto concatenatedNumberList = jennysNumber + secondNumberList; 
    cout << "\n\n";
    //concatenatedNumberList.print(); 
    cout << "\n\n";

    using threeByFourMatrix = MyArray<MyArray<int, 3>, 4>; 

    threeByFourMatrix twoDarray =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    cout << "\n\n";

    //vector<int> v1; 

    //auto iterator = v1.begin(); 
    //for (auto it = v1.begin(); it != v1.end(); ++it)
    //{

    //}


    for (auto row : twoDarray)
    {
        for (auto num : row)
        {
            cout << num << " ";
        }
        cout << "\n";
    }





    //INTEGER a = 355; 


    //cout << a << endl; 

    return 0;
}