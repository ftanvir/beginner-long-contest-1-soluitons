#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x;
	cin>>x;

	int check = x;

	if(x - check == 0) {
		cout<<"int "<<check<<endl;
	} else {
		cout<<"float "<<check<<" "<<x-check<<endl;
	}
}