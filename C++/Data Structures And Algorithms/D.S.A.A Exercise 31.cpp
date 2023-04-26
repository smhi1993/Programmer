#include <iostream> 
#include <vector> 
using namespace std;
//////////////////////////////////////////////////////////////// 
class StackX 
	{ private: 
		int maxSize;                 //size of stack array 
		vector<int>(stackVect) ;     //stack vector 
		int top;                     //top of stack 
	public: 
	//-------------------------------------------------------------- 
	StackX(int s) : maxSize(s), top(-1)  //constructor 
		{ stackVect.resize(maxSize); } 
	//-------------------------------------------------------------- 
	void push(int p)                //put item on top of stack 
		{ stackVect[++top] = p; } 
	//-------------------------------------------------------------- 
	int pop()                       //take item from top of stack 
		{ return stackVect[top--]; } 
	//-------------------------------------------------------------- 
	int peek()                      //peek at top of stack 
		{ return stackVect[top]; } 
	//-------------------------------------------------------------- 
	bool isEmpty()                  //true if stack is empty 
		{ return (top == -1); } 
	//-------------------------------------------------------------- 
	};  //end class StackX 
//////////////////////////////////////////////////////////////// 
int main() 
	{ int theNumber; 
	int theAnswer; 
	int stackTriangle(int);
	cout << “Enter a number: “; 
	cin >> theNumber; 
	theAnswer = stackTriangle(theNumber); 
	cout << “Triangle=” << theAnswer << endl; 
	return 0;
	}  //end main() 
//------------------------------------------------------------- 
int stackTriangle(int number) 
	{ StackX theStack(10000);         //make a big stack 
	int answer = 0;                 //initialize answer
	while(number > 0)               //until n is 1, 
		{ theStack.push(number);       //push value 
		--number;                    //decrement value 
		} 
	while( !theStack.isEmpty() )    //until stack empty, 
		{ int newN = theStack.pop();   //pop value, 
		answer += newN;              //add to answer 
		} 
	return answer; 
	}

