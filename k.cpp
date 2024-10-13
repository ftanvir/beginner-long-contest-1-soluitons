#include <bits/stdc++.h>

using namespace std;

int main()
{
	char ch;
	cin>>ch;

	if(ch>='a' && ch<='z') {
		cout<<(char)toupper(ch)<<endl;
	} else {
		cout<<(char)tolower(ch)<<endl;
	}
}