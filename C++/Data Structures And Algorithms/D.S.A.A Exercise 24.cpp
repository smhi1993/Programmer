#include <iostream> 
using namespace std; 
//////////////////////////////////////////////////////////////// 
class Link 
	{ public:
		double dData;                  //data item 
		Link* pNext;                   //ptr to next link in list 
	//------------------------------------------------------------- 
	Link(double d) :dData(d), pNext(NULL)  //constructor 
		{  } 
	//------------------------------------------------------------- 
	void displayLink()                //display this link 
		{ cout << dData << “ “; } 
	//------------------------------------------------------------- 
	};  //end class Link 
//////////////////////////////////////////////////////////////// 
class FirstLastList 
	{ private: 
		Link* pFirst;                  //ptr to first link 
		Link* pLast;                   //ptr to last link 
	public: 
	//-------------------------------------------------------------
	FirstLastList() : pFirst(NULL), pLast(NULL)  //constructor 
		{  } 
	//------------------------------------------------------------- 
	~FirstLastList()                  //destructor 
		{                              //  (deletes all links) 
		Link* pCurrent = pFirst;       //start at beginning 
		while(pCurrent != NULL)        //until end of list, 
			{ Link* pTemp = pCurrent;     //remember current 
			pCurrent = pCurrent->pNext; //move to next link 
			delete pTemp;               //delete old current 
			} 
		} 
	//-------------------------------------------------------------
	bool isEmpty()                    //true if no links 
		{ return pFirst==NULL; } 
	//------------------------------------------------------------- 
	void insertLast(double dd)        //insert at end of list 
		{ Link* pNewLink = new Link(dd); //make new link 
		if( isEmpty() )                //if empty list, 
			pFirst = pNewLink;          //first --> newLink 
		else 
			pLast->pNext = pNewLink;    //old last --> newLink 
			pLast = pNewLink;              //newLink <-- last 
		} 
	//------------------------------------------------------------- 
	double removeFirst()              //delete first link 
		{                              //(assumes non-empty list) 
		Link* pTemp = pFirst;          //remember first link 
		double temp = pFirst->dData; 
		if(pFirst->pNext == NULL)      //if only one item 
			pLast = NULL;               //null <-- last 
			pFirst = pFirst->pNext;        //first --> old next 
			delete pTemp;                  //delete the link 
			return temp; 
		} 
	//------------------------------------------------------------- 
	void displayList() 
		{ Link* pCurrent = pFirst;        //start at beginning 
		while(pCurrent != NULL)         //until end of list, 
			{ pCurrent->displayLink();     //print data 
			pCurrent = pCurrent->pNext;  //move to next link 
			} 
		cout << endl;
		} 
	//------------------------------------------------------------- 
	};  //end class FirstLastList
////////////////////////////////////////////////////////////////
class LinkQueue 
	{ private: 
		FirstLastList theList; 
	public: 
	//-------------------------------------------------------------- 
	bool isEmpty()          //true if queue is empty 
		{ return theList.isEmpty(); } 
	//-------------------------------------------------------------- 
	void insert(double j)      //insert, rear of queue 
		{ theList.insertLast(j); } 
	//-------------------------------------------------------------- 
	double remove()            //remove, front of queue 
		{  return theList.removeFirst();  } 
	//--------------------------------------------------------------
	void displayQueue() 
		{ cout << “Queue (front-->rear): “; 
		theList.displayList(); } 
	//-------------------------------------------------------------- 
	};  //end class LinkQueue
//////////////////////////////////////////////////////////////// 
int main() 
	{ LinkQueue theQueue;       //make a queue
	theQueue.insert(20);      //insert items 
	theQueue.insert(40);
	theQueue.displayQueue();  //display queue (20, 40)
	theQueue.insert(60);      //insert items 
	theQueue.insert(80);
	theQueue.displayQueue();  //display queue (20, 40, 60, 80)
	cout << “Removing two items” << endl; 
	theQueue.remove();        //remove items (20, 40) 
	theQueue.remove();
	theQueue.displayQueue();  //display queue (60, 80) 
	return 0;
	}  //end main()
