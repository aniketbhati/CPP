#include <iostream>

int main(){
 //application to calculate marks and  grades of student
 //initialization of marks
 int marks1;
 int marks2;
 int marks3;
 //taking marks as user input
 std::cout<<"Enter marks1 ";
 std::cin>>marks1;
 std::cout<<"Enter marks2 ";
 std::cin>>marks2;
 std::cout<<"Enter marks3 ";
 std::cin>>marks3;
  
 int totalmarks;
 float percentage;
 char Grade;
 totalmarks=marks1+marks2+marks3;  //to add marks
 //percentage=(static_cast<float>(totalmarks)/300)*100;
 //percentage=(totalmarks/3);
 percentage=(totalmarks/300.0)*100;
 std::cout<<"percentage = "<< percentage<<"%"<<std::endl; //to print percentage 

 if (percentage>=90)
 {
    Grade='A';
 }
 else if (percentage>=80)
 {
    Grade='B';
 }
 else if (percentage>=70)
 {
    Grade='C';
 }
 else if (percentage>=60)
 {
    Grade='D';
 }
 else{
    Grade='F';
 }
 
 std::cout<<Grade<<std::endl;
 return 0;
    }