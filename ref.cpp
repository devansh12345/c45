//reference variable
#include<iostream>
using namespace std;
int main()
{
	int a=50;
	int *p=&a;
	int* &b=p;
	cout<<"the reference varable ="<<*b<<endl;
}