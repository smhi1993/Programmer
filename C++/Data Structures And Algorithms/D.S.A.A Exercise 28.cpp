#include <iostream> 
using namespace std; 
//------------------------------------------------------------- 
int main() 
	{ int theNumber; 
	int triangle(int);
	cout << “Enter a number: “; cin >> theNumber;                          
	int theAnswer = triangle(theNumber); 
	cout << “Triangle=” << theAnswer << endl; 
	return 0; 
	}  // end main() 
//------------------------------------------------------------- 
int triangle(int n) 
	{ if(n==1) 
		return 1; 
	else
		return  ( n + triangle(n-1) ); 
	}
