#include <iostream> 
#include <vector> 
#include <string> 
using namespace std;
//////////////////////////////////////////////////////////////// 
class StackX 
	{ private: 
		int maxSize; 
		vector<char> stackVect;      //vector holds stack 
		int top; 
	public: 
//-------------------------------------------------------------- 
		StackX(int max) : maxSize(max), top(-1)        //constructor 
			{ stackVect.resize(maxSize);   //size the vector 
			} 
//-------------------------------------------------------------- 
		void push(char j)               //put item on top of stack 
		{ stackVect[++top] = j;  } 
//-------------------------------------------------------------- 
		char pop()                      //take item from top of stack 
		{  return stackVect[top--];  } 
//-------------------------------------------------------------- 
		char peek()                     //peek at top of stack 
		{  return stackVect[top];  } 
//-------------------------------------------------------------- 
		bool isEmpty()                  //true if stack is empty 
		{ return (top == -1); } 
//-------------------------------------------------------------- 
	};  //end class StackX 
//////////////////////////////////////////////////////////////// 
class Reverser 
	{ private: string input;                //input string 
	string output;               //output string 
	public: 
//-------------------------------------------------------------- 
		Reverser(string in) : input(in) //constructor 
			{  } 
//-------------------------------------------------------------- 
		string doRev()                  //reverse the word 
			{ int stackSize = input.length(); //get max stack size 
			StackX theStack(stackSize);  //make stack
				for(int j=0; j<input.length(); j++) 
					{ char ch = input[j];       //get a char from input 
					theStack.push(ch);        //push it 
					} 
				output = ��; 
				while( !theStack.isEmpty() )
					{ char ch = theStack.pop(); //pop a char, 
					output = output + ch;     //append to output 
					} 
				return output; }  //end doRev() 
//-------------------------------------------------------------- 
	};  //end class Reverser 
//////////////////////////////////////////////////////////////// 
int main() 
	{ string input, output;
	while(true) 
		{ cout << �Enter a word: �; cin >> input;                //read a word from kbd 
		if( input.length() < 2 )     //quit if one character 
			break; //make a Reverser 
		Reverser theReverser(input); 
		output = theReverser.doRev(); //use it 
		cout << �Reversed: � << output << endl; 
		}  //end while 
	return 0; 
	}  //end main()
