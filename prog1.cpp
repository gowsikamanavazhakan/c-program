#include<iostream>
using namespace std;
class sample
{
	public:
		int a,b,c;
		void getdata();
		void putdata();
};
void sample::getdata()
{
	cout<<"Enter the values for a and b";
	cin>>a>>b;
}
void sample::putdata()
{
	cout<<"The values of a & b is"<<a<<"\t"<<b;
}
int main()
{
	sample s;
	s.getdata();
	s.putdata();
	return 0;
	
}
