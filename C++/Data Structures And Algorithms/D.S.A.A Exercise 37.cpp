#include <iostream> 
#include <vector> 
#include <cstdlib>                     //for random numbers 
#include <ctime>                       //for random numbers 
using namespace std;
//////////////////////////////////////////////////////////////// 
class ArrayIns 
	{ private: 
		vector<double>(theVect);         //vector of doubles 
		int nElems;                      //number of data items 
	public: 
	//-------------------------------------------------------------- 
	ArrayIns(int max) : nElems(0)       //constructor 
		{ theVect.resize(max);             //size the vector 
		} 
	//-------------------------------------------------------------- 
	void insert(double value)           //put element into array 
		{ theVect[nElems] = value;         //insert it 
		nElems++;                        //increment size 
		} 
	//-------------------------------------------------------------- 
	void display()                      //displays array contents 
		{ cout << “A=”; 
		for(int j=0; j<nElems; j++)      //for each element, 
			cout << theVect[j] << “ “;    //display it 
			cout << endl; 
		} 
	//-------------------------------------------------------------- 
	void quickSort()                    //sort array 
		{ recQuickSort(0, nElems-1);       //call recursive sort 
		} 
	//-------------------------------------------------------------- 
	void recQuickSort(int left, int right)  //recursive sort 
		{ int size = right-left+1; 
		if(size <= 3)                    //manual sort if small
			manualSort(left, right);
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
		if( theVect[left] > theVect[center] ) 
			swap(left, center); //order left & right 
		if( theVect[left] > theVect[right] ) 
			swap(left, right); //order center & right 
		if( theVect[center] > theVect[right] ) 
			swap(center, right);
		swap(center, right-1);           //put pivot on right 
		return theVect[right-1];         //return median value 
		}  //end medianOf3() 
	//-------------------------------------------------------------- 
	void swap(int dex1, int dex2)       //swap two elements 
		{ double temp = theVect[dex1];     //A into temp 
		theVect[dex1] = theVect[dex2];   //B into A 
		theVect[dex2] = temp;            //temp into B 
		}  //end swap( )
	//-------------------------------------------------------------- 
										//partition a range 
	int partitionIt(int left, int right, double pivot) 
		{ int leftMark = left;             //right of first elem 
		int rightMark = right - 1;       //left of pivot
		while(true) 
			{ while( theVect[++leftMark] < pivot ) //find bigger ;                                 
												   //   (nop) 
			while( theVect[--rightMark] > pivot )  //find smaller ;                                 
												   //   (nop) 
			if(leftMark >= rightMark)     //if pointers cross,
				break;                     //   partition done 
			else                          //not crossed, so 
				swap(leftMark, rightMark); //swap elements 
			}  //end while(true) 
		swap(leftMark, right-1);           //restore pivot 
		return leftMark;                   //return pivot location 
		}  //end partitionIt() 
	//-------------------------------------------------------------- 
	void manualSort(int left, int right) 
		{ int size = right-left+1; 
		if(size <= 1) 
			return;                       //no sort necessary 
		if(size == 2) 
			{ if( theVect[left] > theVect[right] ) 
				swap(left, right); 
			return; 
			} 
		else  //size==3, so 3-sort left, center (right-1) & right 
			{ if( theVect[left] > theVect[right-1] ) 
				swap(left, right-1);                //left, center 
			if( theVect[left] > theVect[right] ) 
				swap(left, right);                  //left, right 
			if( theVect[right-1] > theVect[right] ) 
				swap(right-1, right);               //center, right
			} 
		}  //end manualSort() 
	//-------------------------------------------------------------- 
	};  //end class ArrayIns 
//////////////////////////////////////////////////////////////// 
int main() 
	{ time_t aTime; 
	int maxSize = 16;             //array size 
	ArrayIns arr(maxSize);        //create the array 
	srand( static_cast<unsigned>(time(&aTime)) );  //seed randoms
	for(int j=0; j<maxSize; j++)  //fill array with 
		{                          //random numbers 
		double n = rand() % 99; 
		arr.insert(n); 
		} 
	arr.display();                //display items 
	arr.quickSort();              //quicksort them 
	arr.display();                //display them again 
	return 0; 
	}  //end main()
