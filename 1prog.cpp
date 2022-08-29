#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	cout<<"Enter the username:";
	cin>>s1;
	cout<<"Re-enter the username:";
	cin>>s2;
	if (strcmp(s1,s2)!=0)
	{
		cout<<"Invalid username";
    }
	else
	{
	
		cout<<"Valid username";
}
	return 0;
}
