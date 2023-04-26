#include <iostream>
#include <vector>
using namespace std;
////////////////////////////////////////////////////////////////
class HighArray 
{ private: vector<double> v;                //vector v
int nElems;                      //number of data items
public:
	//-------------------------------------------------------------- 
	HighArray() : nElems(0)             //default constructor
	{  } 
	//-------------------------------------------------------------- 
	HighArray(int max) : nElems(0)      //1-arg constructor 
	{ v.resize(max); }               //size the vector 
	//--------------------------------------------------------------
bool find(double searchKey)         //find specified value 
{int j; 
for(j=0; j<nElems; j++)          //for each element, 
	if(v[j] == searchKey)         //found item? 
		break;                     //exit loop before end 
if(j == nElems)                  //gone to end? 
	return false;                 //yes, can’t find it 
else 
	return true;                  //no, found it 
}  //end find() 
//-------------------------------------------------------------- 
void insert(double value)           //put element into array 
{ v[nElems] = value;               //insert it 
nElems++;                        //increment size 
} 
//-------------------------------------------------------------- 
bool remove(double value)           //remove element from array 
{ int j; for(j=0; j<nElems; j++)          //look for it
if( value == v[j] ) break; if(j==nElems)                    //can’t find it 
	return false;
else                             //found it 
{ for(int k=j; k<nElems; k++)   //move higher ones down
v[k] = v[k+1]; nElems--;                     //decrement size
return true; } }  //end delete() 
//-------------------------------------------------------------- 
void display()                      //displays array contents 
{ for(int j=0; j<nElems; j++)      //for each element, 
cout << v[j] << “ “;          //display it
cout << endl; } 
//-------------------------------------------------------------- 
};  //end 
class HighArray
	//////////////////////////////////////////////////////////////// 
	int main() 
{ int maxSize = 100;                  //array size HighArray 
arr(maxSize);             //vector
arr.insert(77);                     //insert 10 items
arr.insert(99);
arr.insert(44);
arr.insert(55);
arr.insert(22);
arr.insert(88);
arr.insert(11); 
arr.insert(0);
arr.insert(66);
arr.insert(33);
arr.display();                      //display items
int searchKey = 35;                 //search for item
if( arr.find(searchKey) ) 
	cout << “Found “ << searchKey << endl;
else 
	cout << “Can’t find “ << searchKey << endl;
cout << “Deleting 0, 55, and 99” << endl;
arr.remove(0);                      //delete 3 items
arr.remove(55);
arr.remove(99);
arr.display();                      //display items again 
return 0; }  //end main()
