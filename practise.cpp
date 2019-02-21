#include<iostream>//including header file for cin and cout//
using namespace std; //using namespace//
class sample //class declaration//
{
	int a,b;//variable declaration//
	public:
		sample(int a , int b)//parametrized constructor//
		{
			(*this).a=a;//this pointer// 
			(*this).b=b;//copying values of a and b in this pointer//
		}
		sample(sample &old)//copy constructor//
		{
			a=old.a;
			b=old.b;
		}
		void print()//print function declaration//
		{
		  cout<<" a:"<<a<<endl;
		  cout<<" b:"<<b<<endl;	
		}
};
int main()//main function//
{
	sample s1(10,20);//putting a=10 and b=20//
	sample &s2(s1);//putting the value of s1 object in s2//
	s1.print();//printing s1,function calling//
	s2.print();//printing s2,function calling//
return 0;	
}
