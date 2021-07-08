/*
This program is an introduction to Object Oriented Programming in C++.
*/






#include<iostream>
using namespace std;

class student{
	//string name;								//This is a private attribute
	public: 									//If we don't add this, then all the attributes will be treated as private
	string name;
	int age;
	bool gender;
	
	/*	
	void setName(string s){						//To demonstrate how to access private attributes			
		name=s;
	}*/
	

	student(){									//Default Constructor --> Always called when an instance of a class is created
		cout<<"Default Constructor"<<endl;
	}

	student(string s, int i, bool a){			//Parameterised Constructor --> Makes it easier to assign attributes to an instance (without using the dot operator).
		cout<<"Parameterised Constructor"<<endl;
		name=s;
		age=i;
		gender=a;
	}

	student(student &a){
		cout<<"Copy Constructor"<<endl;
		name=a.name;
		age=a.age;
		gender=a.gender;
	}


	~student(){									//This is a destructor (default is present unless explicitly mentioned), which are called when an object(instance) is  
		cout<<"Destructor Called"<<endl;		//destroyed, i.e. at the end of the main function. Has a ~ at the beginning. We do not pass any parameters in their		
	}											//case and neither are they called explicitly.


	void info(){
		cout<<"Name : ";
		cout<<name<<endl;
		cout<<"Age : ";
		cout<<age<<endl;
		cout<<"Gender : ";
		cout<<gender<<endl;	
	}


	bool operator==(student &a){				//This is operator overloading. Here, we define the duty of an operator outside its normal scope.
		if(name==a.name && age==a.age && gender==a.gender)
			return true;
		return false;
	}
};

int main(){
	/*student a;
	a.name="Hrithik";
	a.age=21;
	a.gender=1;

	a.info();


	OR
	*/

	
	int i,n=2;
	//string s;

	/*
	student arr[n];
	for(i=0;i<n;i++){
		cout<<"Enter name : "<<endl;
		cin>>arr[i].name;
	
		//cin>>s;									//To demonstrate how to access a private attribute
		//arr[i].setName(s);
		cout<<"Enter age : "<<endl;
		cin>>arr[i].age;
		cout<<"Enter gender : "<<endl;
		cin>>arr[i].gender;
	}

	for(i=0;i<n;i++){
		arr[i].info();
		cout<<endl;
	}
	*/

	student a("Hrithik", 21, 1);					//Parameterised Constructor is called
	a.info();
	cout<<endl;

	student b;										//Default Constructor is called (We cannot do this when a parameterised constructor is defined unless the 
													//default constructor is also explicitly defined. If it is not defined, we should atleast initialise the
													//parameterised constructor parameters).
	b.name="Anirban";
	b.info();
	cout<<endl;
	
	student c=a;									//Here, c calls the copy constructor and makes a copy of the attributes of the instance a 	
	c.info();
	cout<<endl;

	if(c==a)										//To test the operator overloading
		cout<<"Yes C equals A"<<endl;
	else
		cout<<"C not equals A"<<endl;

	if(b==a)
		cout<<"Yes B equals A"<<endl;
	else
		cout<<"B not equals A"<<endl;
	cout<<endl;
	
	return 0;
}
