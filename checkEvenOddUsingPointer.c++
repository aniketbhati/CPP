//To check even and odd in given using pointer

#include <iostream>
using namespace std;
int main(){
    int arr[10]={3,5,9,4,8,6,7,8,9,10};
    int *ptr=arr;
    for (int i = 0; i <10; i++)
    {
        if(*ptr%2==0){
            cout<<"even"<<" ";
        }
        else{
            cout<<"odd"<<" ";
        }
        *ptr++;
    }
    
}


//To check even and odd in given using pointer for even =1 and odd=0

#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,4,9,5,65,87,88,9,10};
    int* ptr=arr;
    for(int i=0;i<10;i++){
        if((*ptr)%2==0){
            *ptr=1;
        }
        else{
            *ptr=0;
        }
        ptr++;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}