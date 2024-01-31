#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
template<class N,class A>
class Person
{
public:
	Person(N Name, A Age)
	{
		name = Name;
		age = Age;
	}
	N name;
	A age;
};
int main()
{
	Person<string, int>p1("lll", 100);
	cout << p1.age << endl << p1.name << endl;
	return 0;
}