//to calculate total marks percentage division of student

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int rollno,phy,che,it,total;
    float percentage;
    char name[20],div[10];

    cout<<"Enter roll number of the student: ";
    cin>>rollno;

    cout<<"Enter name of the student: ";
    cin>>name;

    cout<<"Enter marks of physics, chemistry and information technology: ";
    cin>>phy>>che>>it;

    total=phy+che+it;
    percentage=total/3.0;

    if(percentage>=60){
        strcpy(div,"First");
    }
    else if(percentage<60 && percentage>=48){
        strcpy(div,"Second");
    }
    else if(percentage<48 && percentage>=36){
        strcpy(div,"Pass");
    }
    else{
        strcpy(div,"Fail");
    }

    cout<<"Roll number : "<<rollno<<endl<<"Name of the student : "<<name<<endl;
    cout<<"Marks in physics : "<<phy<<endl;
    cout<<"Marks in chemistry : "<<che<<endl;
    cout<<"Marks in information technology : "<<it<<endl;
    cout<<"Total marks : "<<total<<endl;
    cout<<"Percentage : "<<percentage<<endl;
    cout<<"Division : "<<div<<endl;
return 0;
}