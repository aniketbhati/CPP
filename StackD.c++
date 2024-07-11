#include <iostream>
#include <vector>
using namespace std;

class Stack{
    private:
    vector<int> elements;

    public:
    void push(int elem){
        elements.push_back(elem);
    }
    
    void pop(){
        if(elements.empty()){
            cout<<"Stack is empty";
        }
        else{
            elements.pop_back();
           
        }
    }
    
    int peek(){
        if(elements.empty()){
            cout<<"Stack is empty";
            return -1;
        }
        else{
            return elements.back();

        }
        
    }
    
    bool isEmpty(){
        return elements.empty();
    }
    

};


int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    cout<<"Top Element is : "<<stack.peek()<<endl;
    
    cout<<stack.isEmpty()<<endl;
    
    stack.pop();
    
    cout<<"Top Element is after pop: "<<stack.peek()<<endl;
    
    return 0;
}