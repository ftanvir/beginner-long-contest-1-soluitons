#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;

	//different way to use min, max
	// int mn = min(a, min(b,c));
	// int mx = max(a, max(b,c))

	// cout<<mn<<" "<<mx<<endl;

	cout<<min({a, b, c})<<" "<<max({a, b, c})<<endl;
}