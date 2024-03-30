#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s;
			getline(cin, s);
			stringstream ss(s);
			string tmp;
			
			vector<string> v;
			while(ss >>tmp)
				{
					v.push_back(tmp);
				}
			for(int i=v.size()-1; i>=0; i--)
				cout <<v[i] <<" ";
			cout <<endl;
		}
		
}
