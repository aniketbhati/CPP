#include<iostream>
using namespace std;
class book{
public:
	string name;
	int price;

	void getdetails(){
		cout<<"enter book name";
		cin>>name;
		cout<<"enter price";
		cin>>price;
	}
	void display(){
		cout<<"book: "<<name<<endl;
		cout<<"price:"<<price<<endl;
	
	}
};
int main(){
	book b1,b2,b3;
	b1.getdetails();
	b2.getdetails();
	b3.getdetails();
	if(b1.name =="c"||b1.name=="c++");
	b1.display();
	return 0;	
}
