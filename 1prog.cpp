#include <iostream>
using namespace std;
int& largestNumber(int&,int&,int&);
int main()
{
	int a,b,c;
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
	cout<<"Enter 3rd number:";
	cin>>c;
	
	cout<<"";

	cout<<"Largest number is :"<< largestNumber(a,b,c)<< endl;
	return 0;
}
int & largestNumber(int &x,int &y,int &z){
	if(x > y && x > z)
		return x;
	else if(y > x && y> z)
		return y;
	else
		return z;
}
