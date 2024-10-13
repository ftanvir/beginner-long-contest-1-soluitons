#include <bits/stdc++.h>

using namespace std;

int main()
{
	int year;

	cin>>year;

	int y = year/365;
	int m = (year%365)/30;

	int d = ((year%365)%30);


	cout<<y<<" years"<<endl;
	cout<<m<<" months"<<endl;
	cout<<d<<" days"<<endl;
}