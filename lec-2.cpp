/*
1. WAP to overload < operator to find which object
contains higher value from given 2 numbers.
*/

#include<iostream>
using namespace std;

	class big{
		public:
			int a;
			int b;
			
			void setdata(int x,int y){
				
			this->a=x;
			this->b=x;
		
		}
		void getdat(){
			cout<<"x ="<<a<<endl<<"y="<<b<<endl;
		}
		int operator+(big n){
			big temp;
			temp.a=this->a+n.a;
			temp.b=this->b+n.b;
			
		}
};
int main(){
	int num1,num2;
	
	cout<<"enter num: "<<endl;
	cin<<num1;
	cout<<"enter num: "<<endl;
	cin<<num2;
	big b1,b2;
	b1.setdata(num1,num2);
	
	return 0;
	
}
