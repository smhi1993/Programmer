#include <iostream> 
#include <vector> 
using namespace std;
//////////////////////////////////////////////////////////////// 
class DArray 
	{ private: 
		vector<double>(theVect);       //vector of doubles 
		int nElems;                    //number of data items 
		void recMergeSort(vector<double>, int, int); 
		void merge(vector<double>, int, int, int); 
	public: 
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
	DArray(int max) : nElems(0)       //constructor 
		{ theVect.resize(max);           //size vector 
		}
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
	void insert(double value)         //put element into array 
		{ theVect[nElems] = value;       //insert it 
		nElems++;                      //increment size 
		}
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
	void display()                    //displays array contents 
		{ for(int j=0; j<nElems; j++)    //for each element, 
			cout << theVect[j] << “ “;  //display it 
			cout << endl; 
		} 
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
	void mergeSort()                  //called by main() 
		{                              //provides workspace 
		vector<double>(workSpace); 
		workSpace.resize(nElems); 
		recMergeSort(workSpace, 0, nElems-1); 
		} 
	};  //end class DArray 
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
	void DArray::recMergeSort(vector<double> workSpace, 
		int lowerBound, int upperBound) 
		{ if(lowerBound == upperBound)      //if range is 1, 
			return;                        //no use sorting 
		else 
			{                              //find midpoint 
			int mid = (lowerBound+upperBound) / 2;    //sort low half 
			recMergeSort(workSpace, lowerBound, mid); //sort high half 
			recMergeSort(workSpace, mid+1, upperBound); //merge them 
			merge(workSpace, lowerBound, mid+1, upperBound); 
			}  //end else 
		}  //end recMergeSort() 
	//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
	void DArray::merge(vector<double> workSpace, int lowPtr, 
		int highPtr, int upperBound) 
		{ int j = 0;                        //workspace index 
		int lowerBound = lowPtr; 
		int mid = highPtr-1; 
		int n = upperBound-lowerBound+1;  //# of items
		while(lowPtr <= mid && highPtr <= upperBound) 
			if( theVect[lowPtr] < theVect[highPtr] ) 
				workSpace[j++] = theVect[lowPtr++];
			else 
				workSpace[j++] = theVect[highPtr++];
		while(lowPtr <= mid) 
			workSpace[j++] = theVect[lowPtr++];
		while(highPtr <= upperBound) 
			workSpace[j++] = theVect[highPtr++];
		for(j=0; j<n; j++) 
			theVect[lowerBound+j] = workSpace[j]; 
		}  //end merge()
//////////////////////////////////////////////////////////////// 
int main() 
	{ const int maxSize = 100;          //array size 
	DArray arr(maxSize);              //create “array”
	arr.insert(64);                   //insert items 
	arr.insert(21);
	arr.insert(33); 
	arr.insert(70); 
	arr.insert(12); 
	arr.insert(85); 
	arr.insert(44); 
	arr.insert(3); 
	arr.insert(99); 
	arr.insert(0); 
	arr.insert(108);
	arr.insert(36);
	arr.display();                    //display items 
	arr.mergeSort();                  //merge-sort the array 
	arr.display();                    //display items again 
	return 0; 
	}  //end main()
