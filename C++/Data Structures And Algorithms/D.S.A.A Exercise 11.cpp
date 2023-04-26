#include <iostream> 
#include <vector> 
using namespace std; 
//-------------------------------------------------------------- 
class ArrayIns 
	{ private: 
		vector<double> v;              //vector v 
		int nElems;                    //number of data items 
//-------------------------------------------------------------- 
	public:
		ArrayIns(int max) : nElems(0)     //constructor 
			{ v.resize(max);                 //size the vector 
			} 
//-------------------------------------------------------------- 
		void insert(double value)         //put element into array 
			{ v[nElems] = value;             //insert it 
			nElems++;                      //increment size
			}
//-------------------------------------------------------------- 
		void display()                    //displays array contents 
			{ for(int j=0; j<nElems; j++)    //for each element, 
				cout << v[j] << “ “;        //display it 
					cout << endl; } 
//-------------------------------------------------------------- 
		void insertionSort() 
			{ int in, out;
			for(out=1; out<nElems; out++)     //out is dividing line 
				{ double temp = v[out];          //remove marked item 
				in = out;                      //start shifts at out 
				while(in>0 && v[in-1] >= temp) //until one is smaller, 
					{ v[in] = v[in-1];            //shift item to right 
					--in;                       //go left one position 
					} 
				v[in] = temp;                  //insert marked item 
				}  //end for 
			}  //end 
		insertionSort() 
//--------------------------------------------------------------
	};  //end class ArrayIns 
//////////////////////////////////////////////////////////////// 
int main() 
	{ int maxSize = 100;            //array size ArrayIns 
	arr(maxSize);				    //create array
	arr.insert(77);                 //insert 10 items 
	arr.insert(99); 
	arr.insert(44); 
	arr.insert(55); 
	arr.insert(22); 
	arr.insert(88); 
	arr.insert(11); 
	arr.insert(00); 
	arr.insert(66); 
	arr.insert(33);
	arr.display();                //display items 
	arr.insertionSort();          //insertion-sort them 
	arr.display();                //display them again 
	return 0; }  //end main()
