#include <iostream> 
#include <vector>
#include <cstdlib>                   //for random numbers 
#include <ctime>                     //for random numbers 
using namespace std; 
//////////////////////////////////////////////////////////////// 
class DataItem
	{                                 //(could have more items) 
	public: 
		int iData;                     //data item (key) 
	//----------------------------------------------------------------
	DataItem(int ii) : iData(ii)      //constructor 
		{  } 
	//---------------------------------------------------------------- 
	};  //end class DataItem 
//////////////////////////////////////////////////////////////// 
class HashTable 
	{ private: 
		vector<DataItem*> hashArray;   //vctor holds hash table 
		int arraySize; 
		DataItem* pNonItem;            //for deleted items 
	public: 
	//---------------------------------------------------------------- 
	HashTable(int size) : arraySize(size)  //constructor 
		{ hashArray.resize(arraySize);   //size the vector 
		for(int j=0; j<arraySize; j++) //initialize elements 
			hashArray[j] = NULL; 
		pNonItem = new DataItem(-1); 
		} 
	//---------------------------------------------------------------- 
	void displayTable() 
		{ cout << “Table: “; 
		for(int j=0; j<arraySize; j++) 
			{ if(hashArray[j] != NULL) 
				cout << hashArray[j]->iData << “ “;
			else 
				cout << “** “; 
			} 
		cout << endl; 
		} 
	//---------------------------------------------------------------- 
	int hashFunc1(int key) 
		{ return key % arraySize; } 
	//---------------------------------------------------------------- 
	int hashFunc2(int key) 
		{			 //non-zero, less than array size, different from hF1 
					//array size must be relatively prime to 5, 4, 3, and 2 
		return 5 - key % 5; 
		} 
	//---------------------------------------------------------------- 
												//insert a DataItem 
	void insert(int key, DataItem* pItem) //(assumes table not full) 
		{ int hashVal = hashFunc1(key); //hash the key 
		int stepSize = hashFunc2(key);  //get step size 
										//until empty cell or -1 
		while(hashArray[hashVal] != NULL && hashArray[hashVal]->iData != -1)
			{ hashVal += stepSize;        //add the step 
			hashVal %= arraySize;       //for wraparound 
			}
		hashArray[hashVal] = pItem;    //insert item 
		}  //end insert() 
	//----------------------------------------------------------------
	DataItem* remove(int key)   //delete a DataItem 
		{ int hashVal = hashFunc1(key);  //hash the key
		while(hashArray[hashVal] != NULL)  //until empty cell, 
			{                               //is correct hashVal? 
			if(hashArray[hashVal]->iData == key) 
				{ DataItem* pTemp = hashArray[hashVal]; //save item 
			hashArray[hashVal] = pNonItem;        //delete item 
				return pTemp;                         //return item 
				} 
			hashVal += stepSize;        //add the step 
			hashVal %= arraySize;       //for wraparound 
			} 
		return NULL;                   //can’t find item 
		}  //end remove()
	//---------------------------------------------------------------- 
	DataItem* find(int key)           //find item with key 
									  //(assumes table not full) 
		{ int hashVal = hashFunc1(key);  //hash the key 
		int stepSize = hashFunc2(key); //get step size
		while(hashArray[hashVal] != NULL)  //until empty cell, 
			{                               //is correct hashVal? 
			if(hashArray[hashVal]->iData == key) 
				return hashArray[hashVal];   //yes, return item 
			hashVal += stepSize;            //add the step 
			hashVal %= arraySize;           //for wraparound 
			} 
		return NULL;                   //can’t find item 
		};
	//---------------------------------------------------------------- 
	};  //end class HashTable 
//////////////////////////////////////////////////////////////// 
int main() 
	{ int aKey; 
	DataItem* pDataItem;
	int size, n; 
	char choice = ‘b’; 
	time_t aTime; //get sizes
	cout << “Enter size of hash table (use prime number): “;
	cin >> size; 
	cout << “Enter initial number of items: “; 
	cin >> n;
	HashTable theHashTable(size);				//make table 
	srand( static_cast<unsigned>(time(&aTime)) ); //seed random numbers 
	for(int j=0; j<n; j++)            //insert data 
		{ aKey = rand()  % (2 * size); 
		pDataItem = new DataItem(aKey);
		theHashTable.insert(aKey, pDataItem); 
		}
	while(true)                       //interact with user 
		{ cout << “Enter first letter of “; 
		cout << “show, insert, delete, or find: “;
		cin >> choice; 
		switch(choice) 
			{ case ‘s’:
				theHashTable.displayTable(); 
				break; 
			case ‘i’: 
				cout << “Enter key value to insert: “; 
				cin >> aKey;
				pDataItem = new DataItem(aKey); 
				theHashTable.insert(aKey, pDataItem);
				break; 
			case ‘d’:
				cout << “Enter key value to delete: “; 
				cin >> aKey; 
				theHashTable.remove(aKey); 
				break;
			case ‘f’: 
				cout << “Enter key value to find: “; 
				cin >> aKey;
				pDataItem = theHashTable.find(aKey);
				if(pDataItem != NULL) 
					cout << “Found “ << aKey << endl;
				else
					cout << “Could not find “ << aKey << endl;
				break; 
			default: 
				cout << “Invalid entry\n”; 
			}  //end switch 
		}  //end while 
	return 0; 
	}  //end main()
