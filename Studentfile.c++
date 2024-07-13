
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
char name[20];
int id;
ofstream fout;
fout.open("student.txt");
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your id: ";
cin>>id;
fout<<name<<endl;
fout<<id<<endl;
fout.close();

ifstream fin;
fin.open("student.txt");
fin>>name;
fin>>id;
cout<<"Name: "<<name<<endl;
cout<<"Id: "<<id<<endl;
fin.close();

fout.open("student1.txt");
cout<<"Enter new details"<<endl;
cin>>name>>id;
fout<<name<<endl;
fout<<id<<endl;
fout.close();
fin.open("student1.txt");
string st;

while(fin.eof() == 0){
getline(fin,st);
cout<<st;
}
fin.close();


return 0;
}
