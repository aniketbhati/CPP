#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


class demo{
	public:
	void add(int a, int b){
		cout<<"addition of two number is: "<<(a+b)<<endl;
	}
	void add(string a, string b){
		cout<<"concatenation is : "<<(a+b)<<endl;
	}
};
int main(){
	int choice;
	demo d;
	cout<<"press 1 to add 2 num and 2 for concatenate 2 string: ";
	cin>>choice;
	if(choice == 1){
		int num1, num2;
		cout<<"enter first int number: ";
		cin>>num1;
		cout<<"enter 2 num: ";
		cin>>num2;
		d.add(num1, num2);
	}
	else if(choice == 2){
		string num1, num2;
			
		cout<<"enter 1 str: ";
		cin>>num1;
		cout<<"enter 2 str: ";
		cin>>num2;
		d.add(num1, num2);
		}
	
	return 0;
}

