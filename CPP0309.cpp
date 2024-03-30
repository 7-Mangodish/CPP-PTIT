#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			cin.ignore();
			string s;
			getline(cin,s);
			stringstream ss(s);
			string tmp;
			int cnt=0;
			while(ss >>tmp)
				{
					cnt++;
				}
			cout <<cnt <<endl;
}	
}