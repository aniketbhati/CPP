#include <iostream>
using namespace std;
class Errors{
public:
	int no;
	Errors(int x){
    	no = x;
	}
	
    //void displayErrorMessage(){
    //cout<<"You entered some unexpected input!"<<no;
    //}
    void errorMessageForNegativeInputs(){
    	cout<<"Hey! Your Choices Should always be positive";
	}
    void errorMessageForZeroInputs(){
    	cout<<"Hey! Did you say Zero";
	}
	void errorMessageForBiggerInputs(){
    	cout<<"Hey! Don't act smart , enter within the range!";
	}
    
    


};
int main() {
	
	
    int num;
    int draw[6] = {23,67,0,78,100,5};
    cout<<"Hey! its a luck game! You'll get cashback, choose any number between 1 to 6: ";
    cin>>num;
    int index = num-1;
    try{
    	
        if(num<1 || num>6) {
        throw Errors(num);
    }
		else {
			
			if(index == 2) cout<<"Better luck next time!";
			else if(index == 4) cout<<"Congratulations! You are getting the maximum cashback we are offering! Rs. "<<draw[index];
			else {
				
				cout<<"Congratulations you are getting cashback of Rs. "<<draw[index];
	}
	}
	}
	catch(Errors obj) {
		int c = obj.no;
		if(c==0) obj.errorMessageForZeroInputs();
		else if(c > 6) obj.errorMessageForBiggerInputs();
		else if(c < 0) obj.errorMessageForNegativeInputs();
	}
	}
	

