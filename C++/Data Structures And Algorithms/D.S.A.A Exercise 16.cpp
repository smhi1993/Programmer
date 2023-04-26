#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 
//////////////////////////////////////////////////////////////// 
class StackX 
	{ private: 
		int maxSize;                //size of vector 
		vector<char> stackVect;     //vector for stack 
		int top;                    //top of stack 
	public: 
//-------------------------------------------------------------- 
		StackX(int s) : maxSize(s), top(-1)  //constructor 
			{ stackVect.resize(maxSize); } 
//-------------------------------------------------------------- 
		void push(char j)              //put item on top of stack 
			{ stackVect[++top] = j; } 
//--------------------------------------------------------------
		char pop()                     //take item from top of stack 
			{ return stackVect[top--]; } 
//-------------------------------------------------------------- 
		char peek()                    //peek at top of stack 
			{ return stackVect[top]; } 
//-------------------------------------------------------------- 
		bool isEmpty()                 //true if stack is empty 
			{ return (top == -1); } 
//-------------------------------------------------------------- 
	};  //end class StackX 
//////////////////////////////////////////////////////////////// 
class BracketChecker 
	{ private: 
	string input;                        //inputstring 
	public: 
//-------------------------------------------------------------- 
		BracketChecker(string in) : input(in)   //constructor 
			{  } 
//-------------------------------------------------------------- 
		void check() 
			{ int stackSize = input.length(); //get max stack size 
			StackX theStack(stackSize);       //make stack bool 
			isError = false;                  //error flag
			for(int j=0; j<input.length(); j++)  //get chars in turn 
				{ char ch = input[j];               //get char switch(ch) 
					{ case ‘{‘:                      //opening symbols 
					case ‘[‘: 
					case ‘(‘: 
						theStack.push(ch);          //push them 
						break;

					case ‘}’:                      //closing symbols 
					case ‘]’: 
					case ‘)’: 
						if( !theStack.isEmpty() )   //if stack not empty, 
							{ char chx = theStack.pop();  //pop and check 
							if( (ch==’}’ && chx!=’{‘) || 
									(ch==’]’ && chx!=’[‘) || 
										(ch==’)’ && chx!=’(‘) ) 
								{ isError = true; 
								cout << “Mismatched delimeter: “ << ch 
									<< “ at “ << j << endl;}
							} 
							else                        //prematurely empty 
								{ isError = true; 
							cout << “Misplaced delimiter: “ << ch 
								<< “ at “ << j << endl; } 
							break; 
						default:    //no action on other characters 
							break; }  //end switch 
				}  //end for 
			//at this point, all characters have been processed 
			if( !theStack.isEmpty() ) 
				cout << “Missing right delimiter” << endl; 
			else if( !isError ) 
				cout << “OK” << endl; }  //end check() 
//-------------------------------------------------------------- 
	};  //end class BracketChecker 
//////////////////////////////////////////////////////////////// 
int main() 
	{ string input; 
	while(true) 
		{ cout << “Enter string containing delimiters “ 
			<< “(no whitespace): “; 
		cin >> input;            //read a string from kbd 
		if( input.length() == 1 )   //quit if ‘q’, etc. 
			break; //make a BracketChecker 
		BracketChecker theChecker(input); 
		theChecker.check();      //check brackets 
		}  //end while 
	return 0; 
	}  //end main()