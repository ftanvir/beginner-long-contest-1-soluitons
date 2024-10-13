#include <bits/stdc++.h>

using namespace std;

int main()
{
	double pi = 3.141592653;
	double r;
	cin>>r;

	//for r^2 you can also use this
	//pow(r, 2);

	cout<<fixed<<setprecision(9)<<pi*r*r<<endl;

	return 0;
}