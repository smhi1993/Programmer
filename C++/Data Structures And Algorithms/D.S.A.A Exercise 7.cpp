class Person 
	{ private: 
		string lastName; 
		string firstName; 
		int age; 
	public:
//-------------------------------------------------------------- 
	Person(string last, string first, int a) :   //constructor 
				lastName(last), firstName(first), age(a) 
		{  } 
//-------------------------------------------------------------- 
	void displayPerson() 
		{ cout << “   Last name: “ << lastName; 
		cout << “, First name: “ << firstName; 
		cout << “, Age: “ << age << endl; } 
//-------------------------------------------------------------- 
	string getLast()                    //get last name 
		{ return lastName; } 
	};  //end class Person
