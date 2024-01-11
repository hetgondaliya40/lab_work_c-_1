#include<iostream>
#include<string.h>

using namespace std;

class Car{
	public :
		int id;
		char company[100];
		char color[100];
		int model;
		int release;
};

int main(){

	
	int i;
	
	Car s1,s2;
	for(i=1;i<6;i++){
	
	cout<<"Enter id "<<endl;
	cin>>s1.id;
	
	cout<<"Enter company name "<<endl;
	cin>>s1.company;
	
	cout<<"Enter color "<<endl;
	cin>>s1.color;
	
	cout<<"Enter model "<<endl;
	cin>>s1.model;
	
	cout<<"Enter release  year"<<endl;
	cin>>s1.release;
	
	cout<<s1.id<<endl;
	cout<<s1.company<<endl;
	cout<<s1.color<<endl;
	cout<<s1.model<<endl;
	cout<<s1.release<<endl;
	
	return 0;
}

}
