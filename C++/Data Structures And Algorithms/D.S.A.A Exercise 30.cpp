#include <iostream> 
#include <vector> 
using namespace std;
//////////////////////////////////////////////////////////////// 
class ordArray 
	{ private:
		vector<double> v;              //vector v 
		int nElems;                    //number of data items
	public: 
	//----------------------------------------------------------- 
	ordArray(int max)                 //constructor
		{ v.resize(max);                 //size the array 
		nElems = 0;	
		} 
	//----------------------------------------------------------- 
	int getSize()                     //return # of elements 
		{ return nElems; } 
	//----------------------------------------------------------- 
	int find(double searchKey)        //initial find() 
		{ return recFind(searchKey, 0, nElems-1); } 
	//----------------------------------------------------------- //recursive find() 
	int recFind(double searchKey, int lowerBound, int upperBound) 
		{ int curIn;
		curIn = (lowerBound + upperBound ) / 2; 
		if(v[curIn]==searchKey) 
			return curIn;               //found it 
		else if(lowerBound > upperBound) 
			return nElems;              //can’t find it 
		else                           //divide range 
			{ if(v[curIn] < searchKey)    //it’s in upper half 
				return recFind(searchKey, curIn+1, upperBound); 
			else                        //it’s in lower half 
				return recFind(searchKey, lowerBound, curIn-1); 
			}  //end else divide range 
		}  //end recFind() 
	//-----------------------------------------------------------
	void insert(double value)  //put element into array 
		{ int j; for(j=0; j<nElems; j++)        //find where it goes 
		if(v[j] > value)            //(linear search) 
			break;
		for(int k=nElems; k>j; k--)    //move bigger ones up 
			v[k] = v[k-1]; v[j] = value;                  //insert it 
			nElems++;                      //increment size 
		}  //end insert() 
	//----------------------------------------------------------- 
	void display()             //displays array contents 
		{ for(int j=0; j<nElems; j++)       //for each element, 
		cout << v[j] << “ “;  //display it 
		cout << endl;
		} 
	//----------------------------------------------------------- 
	};  //end class ordArray 
//////////////////////////////////////////////////////////////// 
int main() 
	{ int maxSize = 100;             //array size 
	ordArray arr(maxSize);         //ordered array
	arr.insert(72);                //insert items 
	arr.insert(90); 
	arr.insert(45); 
	arr.insert(126); 
	arr.insert(54); 
	arr.insert(99); 
	arr.insert(144); 
	arr.insert(27); 
	arr.insert(135); 
	arr.insert(81); 
	arr.insert(18); 
	arr.insert(108); 
	arr.insert(9); 
	arr.insert(117); 
	arr.insert(63); 
	arr.insert(36);
	arr.display();                 //display array
	int searchKey = 27;            //search for item 
	if( arr.find(searchKey) != arr.getSize() ) 
		cout << “Found “ << searchKey << endl; 
	else 
		cout << “Can’t find “ << searchKey << endl; 
	return 0; 
	}  //end main()
