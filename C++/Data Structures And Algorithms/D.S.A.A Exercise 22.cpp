#include <iostream> 
using namespace std; 
//////////////////////////////////////////////////////////////// 
class Link 
	{ public: 
		double dData;               //data item 
		Link* pNext;                //next link in list 
	//------------------------------------------------------------- 
	Link(double dd) : dData(dd), pNext(NULL)   //constructor                
		{  }                         
	//-------------------------------------------------------------
	void displayLink()      //display ourself
		{ cout << dData << “ “; } 
	//------------------------------------------------------------- 
	};  //end class Link 
//////////////////////////////////////////////////////////////// 
class LinkList 
	{ private: 
		Link* pFirst;               //ptr to first item on list 
	public: 
	//------------------------------------------------------------- 
	LinkList() : pFirst(NULL)      //constructor 
		{  }           
	//------------------------------------------------------------- 
	~LinkList()                    //destructor (deletes links) 
		{ Link* pCurrent = pFirst;    //start at beginning of list 
		while(pCurrent != NULL)     //until end of list, 
			{ Link* pOldCur = pCurrent;    //save current link 
			pCurrent = pCurrent->pNext;  //move to next link 
			delete pOldCur;              //delete old current 
			} 
		} 
	//-------------------------------------------------------------
	bool isEmpty()                 //true if list is empty 
		{ return (pFirst==NULL); } 
	//------------------------------------------------------------- 
	void insertFirst(double dd)    //insert at start of list 
		{ Link* pNewLink = new Link(dd); //make new link 
			pNewLink->pNext = pFirst;   //newLink --> old first 
			pFirst = pNewLink;          //first --> newLink 
		} 
	//------------------------------------------------------------- 
	double deleteFirst()           //delete first item 
		{                           //(assumes list not empty)
		Link* pTemp = pFirst;       //save old first link 
		pFirst = pFirst->pNext;     //remove it: first-->old next 
		double key = pTemp->dData;  //remember data 
		delete pTemp;               //delete old first link 
		return key;                 //return deleted link’s data 
		} 
	//------------------------------------------------------------- 
	void displayList()             //display all links 
		{ Link* pCurrent = pFirst;    //start at beginning of list 
		while(pCurrent != NULL)     //until end of list, 
			{ pCurrent->displayLink(); //print data 
			pCurrent = pCurrent->pNext;  //move to next link 
			} 
		cout << endl; 
		}
	//------------------------------------------------------------- 
	};  //end class LinkList 
//////////////////////////////////////////////////////////////// 
class LinkStack 
	{ private: 
		LinkList* pList;            //pointer to linked list 
	public: 
	//-------------------------------------------------------------- 
	LinkStack()                    //constructor 
		{ pList = new LinkList; }   //make a linked list 
	//-------------------------------------------------------------- 
	~LinkStack()                   //destructor 
		{ delete pList; }           //delete the linked list 
	//-------------------------------------------------------------- 
	void push(double j)            //put item on top of stack 
		{ pList->insertFirst(j); } 
	//-------------------------------------------------------------- 
	double pop()                   //take item from top of stack
		{ return pList->deleteFirst(); } 
	//-------------------------------------------------------------- 
	bool isEmpty()                 //true if stack is empty 
		{ return ( pList->isEmpty() ); } 
	//-------------------------------------------------------------- 
	void displayStack()     
		{ cout << “Stack (top-->bottom): “; 
		pList->displayList(); }	
	//-------------------------------------------------------------- 
	};  //end class LinkStack 
//////////////////////////////////////////////////////////////// 
int main()
	{ LinkStack theStack;            //make stack
	theStack.push(20);             //push items 
	theStack.push(40);
	theStack.displayStack();       //display stack (40, 20)
	theStack.push(60);             //push items 
	theStack.push(80);
	theStack.displayStack();       //display (80, 60, 40, 20,) 
	theStack.pop();                //pop items (80, 60) 
	theStack.pop();
	theStack.displayStack();       //display stack (40, 20) 
	return 0; 
	}  //end main()
