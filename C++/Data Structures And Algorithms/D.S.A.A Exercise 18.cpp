#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////////////////
class Queue 
	{ private: 
		int maxSize; 
		vector<int>(queVect); 
		int front; 
		int rear; 
	public: 
	//-------------------------------------------------------------- 
	Queue(int s) : maxSize(s+1), front(0), rear(-1) //constructor 
		{ queVect.resize(maxSize); } 
	//--------------------------------------------------------------
	void insert(int j)            //put item at rear of queue 
		{ if(rear == maxSize-1) 
			rear = -1; 
		queVect[++rear] = j; } 
	//-------------------------------------------------------------- 
	int remove()                  //take item from front of queue 
		{ int temp = queVect[front++]; 
		if(front == maxSize) 
			front = 0; 
		return temp; } 
	//-------------------------------------------------------------- 
	int peek()                    //peek at front of queue 
		{ return queVect[front]; } 
	//-------------------------------------------------------------- 
	bool isEmpty()                //true if queue is empty 
		{ return ( rear+1==front || (front+maxSize-1==rear) ); } 
	//-------------------------------------------------------------- 
	bool isFull()                 //true if queue is full 
		{ return ( rear+2==front || (front+maxSize-2==rear) ); } 
	//-------------------------------------------------------------- 
	int size()                    //(assumes queue not empty) 
		{ if(rear >= front)          //contiguous sequence 
			return rear-front+1; 
		else                       //broken sequence 
			return (maxSize-front) + (rear+1); } 
	//-------------------------------------------------------------- 
	};  //end class Queue
