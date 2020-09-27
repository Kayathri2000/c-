#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"waiting to register your first vote?\n";
	cout<<"enter your age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"\n congratulations!!!\n your eligible to vote.\n";
		cout<<"think wise before you vote.....\n";
	}
	else
	{
		cout<<"opps,just wait for "<<18-age<<" years to get your first vote ";
	}
	return 0;
}
