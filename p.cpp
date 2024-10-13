#include <bits/stdc++.h>

using namespace std;

int main()
{
	int correct = 1999;

	while(1) {
		int x; cin>>x;

		if(x==correct) {
			cout<<"Correct"<<endl;
			return 0;
		}
		cout<<"Wrong"<<endl;
	}

	return 0;
}