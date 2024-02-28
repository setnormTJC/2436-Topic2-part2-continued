#include"VectorPrime.h"
#include <iostream> 

#include<array>
#include<vector> 

using std::cout;
using std::endl;

void demoPushing(CharVector& v1)
{
	v1.printVector();

	cout << "\nAfter pushing 'z' : " << endl;
	v1.push('z');
	v1.printVector();


	v1.push('y');
	v1.push('x');

	v1.push('v');
	v1.push('u');
	v1.push('t');

	cout << "After pushing all of that stuff (6 things): " << endl;
	v1.printVector();
}

void demoStdPop()
{
	std::vector<int> stdV1;

	stdV1.push_back(1);
	stdV1.push_back(1);
	stdV1.push_back(1);
	stdV1.push_back(1);
	stdV1.push_back(1);

	cout << "Size and capacity of stdVect after pushing back 5 times : " << endl;
	cout << stdV1.size() << endl;
	cout << stdV1.capacity() << endl;

	stdV1.pop_back();
	cout << "\n\nSize and capacity of stdVect after calling POPBACK : " << endl;
	cout << stdV1.size() << endl;
	cout << stdV1.capacity() << endl;

}

int main()
{
	//double * a = new double [111111111111111]
	//while (true)
	//{
	//	int* a = new int; 
	//	delete a; 
	//}
	//demoStdPop(); 

	//std::array<int, 3> a1; 
	//a1.
	cout << "\n\nCharVector object created with default constructor: " << endl;
	CharVector v1{};

	demoPushing(v1);

	//v1.pop(); 
	//v1.printVector(); 

	//cout << "Updated SIZE after popping once: " << v1.size() << endl;
	//cout << "Updated capacity after popping once: " << v1.capacity() << endl;


	//demoPop(); 

	return 0;
}