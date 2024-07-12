#include <iostream>
using namespace std;
int main(){
	
	double *ptr=NULL;
	ptr=new double[10];
	if(ptr==NULL){
		cout<<"allocation failed"<<endl;
		exit(1);
	}
	else{
		cout<<"allocated"<<endl;
		*ptr;
		cout<<"enter num"<<endl;
		cin>>*ptr;
		cout<<"Num is: "<<*ptr<<endl;
		if(*ptr>0){
			cout<<"Number is positive"<<endl;
		}
		else if(*ptr<0){
			cout<<"number is negative"<<endl;
		}
		else{
			cout<<"Number is 0";
		}
		
	}
}