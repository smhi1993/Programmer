#include <iostream> 
using namespace std;
//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––
void merge( int[], int, int[], int, int[] ); 
void display(int[], int);               //prototypes 
//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
int main() 
	{ int arrayA[] = {23, 47, 81, 95};        //source A 
	int arrayB[] = {7, 14, 39, 55, 62, 74}; //source B 
	int arrayC[10];                      //destination
	merge(arrayA, 4, arrayB, 6, arrayC); //merge A+B––>C 
	display(arrayC, 10);                 //display result 
	return 0; 
	}  //end main() 
//–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––– 
void merge( int arrayA[], int sizeA,    //merge A and B into C 
	int arrayB[], int sizeB, int arrayC[] ) 
	{ int aDex=0, bDex=0, cDex=0;
	while(aDex < sizeA && bDex < sizeB)  //neither array empty 
		if( arrayA[aDex] < arrayB[bDex] ) 
			arrayC[cDex++] = arrayA[aDex++]; 
		else 
			arrayC[cDex++] = arrayB[bDex++];
	while(aDex < sizeA)                  //arrayB is empty, 
		arrayC[cDex++] = arrayA[aDex++];  //but arrayA isn’t
	while(bDex < sizeB)                  //arrayA is empty, 
		arrayC[cDex++] = arrayB[bDex++];  //but arrayB isn’t 
	}  //end merge() 
//––––––––––––––––––––––––––––––––––––––––––––––––––––––––––- 
void display(int theArray[], int size)  //display array 
	{ for(int j=0; j<size; j++) 
		cout << theArray[j] << “ “; cout << endl; 
	}
