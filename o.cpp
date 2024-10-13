#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin>>n;

	int e = 0, o = 0, p=0, neg= 0;
	while(n--) {
		int x; 
		cin>>x;

		if(x&1) o++;
		if(!(x&1)) e++;
		if(x<0) neg++;
		if(x>0) p++;
	}

	cout<<"Even: "<<e<<endl;
	cout<<"Odd: "<<o<<endl;
	cout<<"Positive: "<<p<<endl;
	cout<<"Negative: "<<neg<<endl;

	return 0;
}