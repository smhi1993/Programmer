#include <iostream> 
using namespace std; 
void doTowers(int, char, char, char);          //prototype 
//末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末 
int main() 
	{ int nDisks;                                 //number of disks
	cout << 摘nter number of disks: �;          //get # of disks 
	cin >> nDisks; doTowers(nDisks, 羨�, 腺�, 舛�);            //solve it 
	return 0; 
	} 
//末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末 
void doTowers(int topN, char src, char inter, char dest) 
	{ if(topN==1)                                 //display 
		cout << 泥isk 1 from � << src << � to � << dest << endl; 
	else 
		{ doTowers(topN-1, src, dest, inter);      //src to inter
		cout << 泥isk � << topN                  //display
			<< � from � << src << � to � << dest << endl; 
		doTowers(topN-1, inter, src, dest);      //inter to dest 
		}
	}

