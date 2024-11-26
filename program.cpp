#include<iostream>
using namespace std;

int fibonacci(int n)
{
	if(n<2)
		return n;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	int x;
	cin>>x;
	if(x<0)
	{
		cout<<"Blad: liczba ujemna!"<<endl;
		return 1;
	}
	
	cout<<"Fibonacci dla: "<<x<<": "<<fibonacci(x)<<endl;
	return 0;
}
