#include <iostream>
#include <vector>
using namespace std;
//if we 2 similar max so couldn't find 2 max the we make a loop to trasverse all and m
//make both max 7 to -1
int largesteleind(int array[], int size){
	int INT_MIN;
	int max=INT_MIN;
	int maxind=-1;
	for(int i=0; i<size; i++){
		if(array[i]>max){
			max=array[i];
			maxind=i;
		}
	}
	return maxind;
}
int main(){
	int array[]={2,3,5,7,6,1,7};
	int n=7;
	int largest=largesteleind(array, n);
	cout<<array[largest]<<endl;
	//array[largest]=-1;
	
	int largestelement = array[largest];
	for(int i=0; i<n; i++){
		if(array[i]==largestelement){
			array[i]=-1;
		}
	}
	
	int indexofsecond=largesteleind(array, n);
	cout<<array[indexofsecond];
	return 0;
}