
#include<iostream>
using namespace std;
void luckyDraw(int* draw, int num) {
int index = num-1;
if(num < 1) {
throw num;
}
else if(num > 6) {
throw 'I';
}
else
{
if(draw[index] == 0){
cout<<"Try luck next time!";
} else {
cout<<"HEY! You just won the cashback of Rs."<<draw[index];
}
}
}
int main()
{
int num;
int index;
int d[6]={67,0,100,89,50};
cout<<"Enter a number between 1 to 6, you will be gifted with a cashback! Time to try your luck!";
cin>>num;
try {
luckyDraw(d,num);
}
catch(int x) {
cout<<"You entered an invalid number.";
}
catch(char c) {
cout<<"Status: "<<c;
}
}


