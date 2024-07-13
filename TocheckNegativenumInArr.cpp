#include <iostream>
using namespace std;
int main(){
	int arr[10];
	cout<<"enter number: ";
	cin>>arr[10];
	cout<<"array"<<arr[10];	
	for(int i=0; i<10; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<10; i++){
		if(i == 0){
			if(arr[i]>arr[i+1])
			{
				cout<<arr[i];
			}
		}
		else if(i == 9){
			if(arr[i]>arr[i-1]){
				cout<<arr[i];
			}
		}
		else{
			if(arr[i]>arr[i-1] &&
			arr[i]>arr[i+1])
			{
				cout<<arr[i];
		}
		
			}
	}
	int count=0;
	for(int i=0; i<10; i++){
		if(arr[i] < 0)
		{
			count++;
		}
	}
	cout<<"number of negative are:"<<count;
	return 0;		
	

}



