
# include <iostream>
using namespace std;
//creating a stack - lifo structure- any values(data types)
template <typename T>
class Stack {
    private:
    T arr[50];
    int top;
    public:
    Stack(): top(-1){}
      // constructor initializing top
      void push(T val){
        if (top>=49){
        cout<<"stack overflow"<<endl;
        }else{
            arr[++top]=val;
        }
      }
      //pushing value onto stack
      T pop(){
        if(top<0){
            cout<<"stack underflow";
            
            }else{
                return arr[top--];
            }
      }
//funtion to print stack
      void printStack() {
        for (int i = top; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};
      int main(){
        Stack <int> intStack;
        Stack <string> charStack;
        intStack.push(10);
        intStack.push(20);
        charStack.push("hello");
        charStack.push("world");
        cout<<intStack.pop()<<endl;
        cout<<charStack.pop()<<endl;

        cout << "stack values1: ";
        intStack.printStack();

        cout << "stack values2: ";
        charStack.printStack();
        return 0;

      }