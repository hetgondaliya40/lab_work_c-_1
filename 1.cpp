#include<iostream>
#include<string.h>

using namespace std;

class Employ{
	public :
		int id;
		char name[100];
		char role[100];
		int age;
		int salary;
		int exp;
		char city[100];
		char company[100];
};

int main(){

	
	int i;
	
	Employ s1,s2;
	for(i=1;i<6;i++){
	
	cout<<"Enter id "<<endl;
	cin>>s1.id;
	
	cout<<"Enter name "<<endl;
	cin>>s1.name;
	
	cout<<"Enter role "<<endl;
	cin>>s1.role;
	
	cout<<"Enter age "<<endl;
	cin>>s1.age;
	
	cout<<"Enter salary "<<endl;
	cin>>s1.salary;
	
	cout<<"Enter exp "<<endl;
	cin>>s1.exp;
	
	cout<<"Enter city "<<endl;
	cin>>s1.city;
	
	cout<<"Enter company "<<endl;
	cin>>s1.company;
	
	cout<<s1.id<<endl;
	cout<<s1.name<<endl;
	cout<<s1.role<<endl;
	cout<<s1.age<<endl;
	cout<<s1.salary<<endl;
	cout<<s1.exp<<endl;
	cout<<s1.city<<endl;
	cout<<s1.company<<endl;

	
	return 0;
}

}
