#include < iostream>
#include < vector>
# include <algorithm>

#include<random>

#include<Windows.h>
#include<shellapi.h>

using namespace std;


bool isSorted(const std::vector<int>& nums)
{
	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i] > nums[i + 1]) //checks for ascending sort
		{
			return false;
		}
	}
	return true; //only reached if all num[i] < num[i + 1]
}

void bogoSort(std::vector<int>& nums)
{
	//std::is_sorted()
	while (!(isSorted(nums)))
	{
		//a shuffle algorithm:
		//std::shuffle();
		//std::random_shuffle()
		for (int i = 0; i < nums.size(); i++)
		{
			std::swap(nums[i], nums[rand() % nums.size()]);
		}

		//cout << "Is it sorted yet? " << endl; 
		//print(nums); 

	}
}


//std:find_if_not()

///std:minmax()


///std:shuffle()    // use with bogo sort

bool isOddInt(int i)
{
	return ((i % 2) != 0);
}

bool isMultipleOfFive(int i)
{
	return ((i % 5) == 0);
	//257% 5 = 2
}
int main()
{
	//std::gcd

	// find_if  function
	vector<int>Nums = { 53,101,35,3,257,3552,59 };

	cout << "  The first multiple of 5 in this array is: " << endl;
	auto result = std::find_if(Nums.begin(), Nums.end(), isMultipleOfFive);



	if (result != Nums.end())
	{
		cout << *result << endl;

	}

	else
	{
		cout << "No multiples of 5 in that array" << endl;
	}

	///////   use "do while" loop
	cout << "  Now sorting letters a - f:\n\n";
	vector<char> Alphabet = { 'b','a','c','d','e','f', };

	do
	{


		std::random_shuffle(Alphabet.begin(), Alphabet.end());


		for (auto& character : Alphabet)
		{
			cout << character << " ";
		}

		cout << "\n";

	} while (!std::is_sorted(Alphabet.begin(), Alphabet.end()));
	////// min max

	cout << "\n DONE  \n\n ";

	int num1;
	int num2;
	cout << "  Enter two numbers using 'ENTER' to confirm each. " << endl;

	cin >> num1 >> num2;

	std::pair<int, int> bounds = std::minmax(num1, num2);

	cout << " Smaller number: " << bounds.first << " Larger number: " << bounds.second << endl;




	wstring desiredWebPage = L"https://www.youtube.com/watch?v=dKBz1KsQY1Y&t=23s";
	////NOTE: the 'w' in "wstring" and the 'L' above are mandatory
	////Replace YouTube link above with what you want

	LPCWSTR typecastWebPage = desiredWebPage.c_str(); 
	//NOTE: the 'LPCWSTR' is mandatory
	//Q: What is 'LPCWSTR'?
	//A: It's a Long Pointer to Constant Wide String
	//THank you for sparing me from typing that out, Microsoft
	//Q: What is a 'Wide String'?
	//A: A string that uses 16 bits per character, as opposed to the standard 8 bits
	//Q: What is a 'Long Pointer'?


	ShellExecute(0, 0, typecastWebPage, 0, 0, SW_SHOW);

	//return 0;


}


