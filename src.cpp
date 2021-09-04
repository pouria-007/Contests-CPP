// This is all I know C++

// Include libraries
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

// Standard namespace Library
using namespace std;
// std::cout << "txt"; 


void myFunction() {
	//It should be above main Function
}


// main function
int main() {
	
	// see out -> cout (print)
	cout << "Hello World ! \n"; // "\n" new line
	cout << "Same shit," << endl; // Same
	cout << "Different story";
	// Ends the function
	return 0;
	
	
	// Variables 
	int ex1; // 4 bytes whole numbers
	float ex6; // 4 bytes 7 decimal digits
	double ex2; // 8 bytes 15 decimal digits
	char ex3; // 1 byte
	string ex4; // Need to include first
	bool ex5; // 1 byte
	//also exist 
	long long int ex7;
	long int ex8;
	short int ex9;
	unsigned long int ex10;
	
	// cout multiple things 
	cout << "I am " << 19 << " years old";
	
	// muliple Variables
	int x=5, y=6, z=1;
	
	// Read-Only variable
	const int Ronly = 14;
	
	// Input
	// See-in
	int i;
	cin >> i;
	
	// Concat Two strings Fast
	string first = "1";
	string second = "2";
	string full = first.append(second);
	full = first + second; // Same
	
	// length() = size()
	full.length();
	
	// Index of String
	cout << full[0];
	// Change the index
	full[0] = 'H';
	
	// Read whole string
	string fullname;
	getline(cin, fullname);
	cout << fullname; // pouria 007
	
	
	// Math
	// Need to include cmath
	cout << min(5, 10);
	cout << max(4, 2);
	cout << sqrt(64);
	cout << round(2.6);
	cout << log(2);
	
	
	// Asle kaar
	if (false) {
		
	} else if (true) {
		
	} else {
	
	}
	// Short hand
	// Variable = (condition) ? Do if True : Do if False;
	int g = (false) ? 10 : 9.8f;
	cout << g;
	
	
	// Switch
	switch (1) {
	
		case 1:
			//code
			break;
		case 2:
			//code
			break;	
		default:
			//Run if didn't match
	}
	
	
	// Loop
	while(false){
		break;
	}
	
	do {
		
	} while(false);
	
	
	for (int i = 0; i < 5; i++){
		//code
		// Skips that step
		continue;
	}
	
	
	
	// Arrays
	// create an array with 3 ints
	int myNum[3];
	// Size will be always 2
	string MyArr[] = {"bmw", "Honda"};
	
	
	// Vector
	// need include <vector>
	// dynamic array with ability to resize
	vector<int> MyVector;
	// Add to end of vector
	MyVector.push_back(2);
	// Return first and last element
	MyVector.begin();
	MyVector.end();
	// Sort Vector ascending
	sort(MyVector.begin(), MyVector.end());
	// Sort Vector descending
	sort(MyVector.begin(), MyVector.end(), greater<int>());
	
	// Pair
	pair<int, char> MyPair;
	// first and second element of pair
	int tst1 = MyPair.first;
	char tst2 = MyPair.second;
	
	
	// Deque
	//same as vector but you cand add to front and back
	//include <queue>
	deque<char> example;
	example.push_front;
	example.push_back;


	// Map
	// store elements with KEY and 
	// can store 10^15 elements!
	map<char, int> MP;
	MP.insert({'a', 2});
	// return number of times 'a' is present
	MP.count('a');
	MP.find('a');
	// go through all elements
	for (auto it = MP.begin(); it != MP.end(); it++)
	{
		// First ans Second value of pair
		// it is a poiner in MP .... IDK yet ...
		char C = (*it).first;
		char C = (*it).second;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
