#include <iostream> 
#include <vector> 
#include <cstdlib>                    //for random numbers 
#include <ctime>                      //for random numbers 
using namespace std;
//////////////////////////////////////////////////////////////// 
class Link
	{                                  //(could be other items) 
	public: 
		int iData;                      //data item 
		Link* pNext;                    //next link in list 
	//---------------------------------------------------------------- 
	Link(int it) : iData(it)           //constructor 
		{  } 
	//----------------------------------------------------------------
	void displayLink()                 //display this link 
		{ cout << iData << “ “; } 
	//---------------------------------------------------------------- 
	};  //end class Link 
//////////////////////////////////////////////////////////////// 
class SortedList 
	{ private: 
		Link* pFirst;                   //ref to first list item 
	public: 
	//---------------------------------------------------------------- 
	SortedList()                       //constructor 
		{ pFirst = NULL; } 
	//---------------------------------------------------------------- 
	void insert(Link* pLink)           //insert link, in order 
		{ int key = pLink->iData; 
		Link* pPrevious = NULL;         //start at first 
		Link* pCurrent = pFirst; //until end of list, 
		while(pCurrent != NULL && key > pCurrent->iData) 
			{                            //or pCurrent > key, 
			pPrevious = pCurrent; 
			pCurrent = pCurrent->pNext;  //go to next item 
			} 
		if(pPrevious==NULL)             //if beginning of list, 
			pFirst = pLink;              //   first -> new link 
		else                            //not at beginning, 
			pPrevious->pNext = pLink;    //   prev -> new link 
		pLink->pNext = pCurrent;        //new link -> current 
		}  //end insert()
	//---------------------------------------------------------------- 
	void remove(int key)       //delete link 
		{                               //(assumes non-empty list) 
		Link* pPrevious = NULL;         //start at first 
		Link* pCurrent = pFirst; //until end of list,
		while(pCurrent != NULL && key != pCurrent->iData) 
			{                           //or key == current, 
			pPrevious = pCurrent; 
			pCurrent = pCurrent->pNext; //go to next link 
			} //disconnect link 
		if(pPrevious==NULL)             //  if beginning of list 
			pFirst = pFirst->pNext;     //     delete first link 
		else                            //  not at beginning 
			pPrevious->pNext = pCurrent->pNext; //delete current link 	
		}  //end remove() 
	//---------------------------------------------------------------- 
	Link* find(int key)                //find link 
		{ Link* pCurrent = pFirst;     //start at first 
									   //until end of list, 
		while(pCurrent != NULL &&  pCurrent->iData <= key)
			{                          //or key too small, 
			if(pCurrent->iData == key) //is this the link? 
				return pCurrent;          //found it, return link 
			pCurrent = pCurrent->pNext;  //go to next item 
			} 
		return NULL;                    //didn’t find it 
		}  //end find() 
	//---------------------------------------------------------------- 
	void displayList() 
		{ cout << “List (first->last): “; 
		Link* pCurrent = pFirst;     //start at beginning of list 
		while(pCurrent != NULL)      //until end of list, 
			{ pCurrent->displayLink();  //print data 
			pCurrent = pCurrent->pNext;  //move to next link 
			} 
		cout << endl; 
		} 
	//---------------------------------------------------------------- 
	};  //end class SortedList 
//////////////////////////////////////////////////////////////// 
class HashTable 
	{ private:
		vector<SortedList*> hashArray;  //vector of lists
		int arraySize; 
	public: 
	//----------------------------------------------------------------
	HashTable(int size)                //constructor 
		{ arraySize = size; 
		hashArray.resize(arraySize);    //set vector size 
		for(int j=0; j<arraySize; j++)  //fill vector 
			hashArray[j] = new SortedList; //with lists 
		} 
	//---------------------------------------------------------------- 
	void displayTable() 
		{ for(int j=0; j<arraySize; j++)  //for each cell, 
			{ cout << j << “. “;           //display cell number 
			hashArray[j]->displayList(); //display list 
			} 
		} 
	//---------------------------------------------------------------- 
	int hashFunc(int key)              //hash function 
		{ return key % arraySize; } 
	//---------------------------------------------------------------- 
	void insert(Link* pLink)           //insert a link 
		{ int key = pLink->iData; 
		int hashVal = hashFunc(key);    //hash the key 
		hashArray[hashVal]->insert(pLink); //insert at hashVal 
		}  //end insert() 
	//---------------------------------------------------------------- 
	void remove(int key)               //delete a link 
		{ int hashVal = hashFunc(key);    //hash the key 
		hashArray[hashVal]->remove(key); //delete link 
		}  //end remove() 
	//---------------------------------------------------------------- 
	Link* find(int key)                //find link 
		{ int hashVal = hashFunc(key);    //hash the key 
		Link* pLink = hashArray[hashVal]->find(key);  //get link 
		return pLink;                   //return link 
		} 
	//---------------------------------------------------------------- 
	};  //end class HashTable 
//////////////////////////////////////////////////////////////// 
int main()
	{ int aKey;
	Link* pDataItem; 
	int size, n, keysPerCell = 100;
	time_t aTime; 
	char choice = ‘b’;
	cout << “Enter size of hash table: “; //get sizes 
	cin >> size; cout << “Enter initial number of items: “; 
	cin >> n; 
	HashTable theHashTable(size);  //make table 
	srand( static_cast<unsigned>(time(&aTime)) );//initialize random numbers 
	for(int j=0; j<n; j++)         //insert data 
		{ aKey = rand() % (keysPerCell * size); 
		pDataItem = new Link(aKey); 
		theHashTable.insert(pDataItem); 
		} 
	while(choice != ‘x’)           //interact with user 
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
				pDataItem = new Link(aKey);
				theHashTable.insert(pDataItem); 
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
