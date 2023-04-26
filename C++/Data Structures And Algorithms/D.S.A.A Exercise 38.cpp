#include <iostream> 
#include <vector> 
#include <cstdlib>                     //for rand() 
#include <ctime>                       //for rand() 
using namespace std;
//////////////////////////////////////////////////////////////// 
class ArrayIns 
	{ private: 
		vector<double> theArray;         //array theArray 
		int nElems;                      //number of data items 
	public: 
	//-------------------------------------------------------------- 
	ArrayIns(int max)                   //constructor 
		{ theArray.reserve(max);           //change size of vector 
		nElems = 0;                      //no items yet 
		} 
	//-------------------------------------------------------------- 
	void insert(double value)           //put element into array 
		{ theArray[nElems] = value;        //insert it 
		nElems++;                        //increment size 
		}
	//-------------------------------------------------------------- 
	void display()                      //displays array contents 
		{ cout << “A=”; for(int j=0; j<nElems; j++)      //for each element, 
		cout << theArray[j] << “ “;   //display it 
		cout << endl; 
		} 
	//--------------------------------------------------------------
	void quickSort()                    //sort the array 
		{ recQuickSort(0, nElems-1);	//    insertionSort(0, nElems-1);      
										//(another option) 
		} 
	//--------------------------------------------------------------
	void recQuickSort(int left, int right)  //recursive quicksort 
		{ int size = right-left+1; 
		if(size < 10)                    //insertion sort if small 
			insertionSort(left, right); 
		else                             //quicksort if large 
			{ double median = medianOf3(left, right); 
			int partition = partitionIt(left, right, median); 
			recQuickSort(left, partition-1); 
			recQuickSort(partition+1, right); 
			} 
		}  //end recQuickSort() 
	//-------------------------------------------------------------- 
	double medianOf3(int left, int right) 
		{ int center = (left+right)/2; //order left & center 
		if( theArray[left] > theArray[center] ) 
			swap(left, center); //order left & right 
		if( theArray[left] > theArray[right] ) 
			swap(left, right); //order center & right 
		if( theArray[center] > theArray[right] ) 
			swap(center, right);
		swap(center, right-1);           //put pivot on right 
		return theArray[right-1];        //return median value 
		}  //end medianOf3() 
	//-------------------------------------------------------------- 
	void swap(int dex1, int dex2)       //swap two elements 
		{ double temp = theArray[dex1];    //A into temp 
		theArray[dex1] = theArray[dex2]; //B into A 
		theArray[dex2] = temp;           //temp into B 
		}  //end swap()
	//-------------------------------------------------------------- 
	int partitionIt(int left, int right, double pivot) 
		{ int leftMark = left;             //right of first elem 
		int rightMark = right - 1;       //left of pivot 
		while(true) 
			{ while( theArray[++leftMark] < pivot )  //find bigger ;                                   //   (nop) while( theArray[--rightMark] > pivot ) //find smaller
	;												 //   (nop) 
			if(leftMark >= rightMark)     //if pointers cross,
				break;                     //  partition done
			else                          //not crossed, so 
				swap(leftMark, rightMark); //swap elements 
			}  //end while(true) 
		swap(leftMark, right-1);         //restore pivot 
		return leftMark;                 //return pivot location 
		}  //end partitionIt() 
	//-------------------------------------------------------------- 
	void insertionSort(int left, int right)  //insertion sort 
		{ int in, out; //sorted on left of out 
		for(out=left+1; out<=right; out++) 
			{ double temp = theArray[out];  //remove marked item 
			in = out;                       //start shifts at out
											//until one is smaller, 
			while(in>left && theArray[in-1] >= temp) 
				{ theArray[in] = theArray[in-1]; //shift item to right 
				--in;                      //go left one position 
				} 
			theArray[in] = temp;          //insert marked item 
			}  //end for 
		}  //end insertionSort() 
	//-------------------------------------------------------------- 
	};  //end class ArrayIns 
//////////////////////////////////////////////////////////////// 
int main() 
	{ int maxSize = 16;                  //array size 
	ArrayIns arr(maxSize);               //create array 
	time_t aTime;                        //seed random numbers 
	srand(static_cast<unsigned>( time(&aTime) ));
	for(int j=0; j<maxSize; j++)         //fill array with 
		{          
										 //random numbers 
		double n = rand() % 99;
		arr.insert(n); 
		} 
	arr.display();                      //display items 
	arr.quickSort();                    //quicksort them 
	arr.display();                      //display them again 
	return 0; 
	}  //end main()
