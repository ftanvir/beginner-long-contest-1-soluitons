#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin>>t;

	while(t--) {
		int n; 
		cin>>n;

		long long ans = 1;

		for(int i = n; i>=1; i--) {
			ans = ans*i;
		}

		cout<<ans<<endl;
	}

	return 0;
}