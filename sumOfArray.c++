#include <iostream>
using namespace std;
#define MAX 5

template<class Type>
class Array{
	public:

Type sum(Type A[]){
	Type total =0;
	for(int i=0; i<MAX; i++)
	total+=A[i];
	return total;
	
}

	void read(Type A[]){
		for(int i=0; i<MAX; i++)
		cin>>A[i];
	}
};
int main(){
	
	Array<int>A;
	Array<float>B;
	
	int array[MAX];
	float array1[MAX];
	
	
	cout<<"\n Enter inter array elements";
	A.read(array);
	
	cout<<"\n sum of eel = "<<A.sum(array);
	
	cout<<"\n Enter float array elements ";
	B.read(array1);
	cout<<"\n Sum of ele= "<<B.sum(array1);
	return 0;
}

