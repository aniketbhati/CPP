#include <iostream>
using namespace std;
class Employee{
	public:
	virtual  void calsalary()=0;
};
class Worker: public Employee{
	public:
		void calsalary(){
			cout<<"calculating salary of worker"<<endl;
		}
};
class Manager: public Employee{
	public:
		void calsalary(){
			cout<<"Manager calculating salary of worker"<<endl;
		}
};
class Admin: public Employee{
	public:
		void calsalary(){
			cout<<"Admin calsalary";
		}
};
int main(){
	//Employee e;
	//e.calsalary();
	Worker W;
	W.calsalary();
	Manager m;
	m.calsalary();
	
	return 0;
}
