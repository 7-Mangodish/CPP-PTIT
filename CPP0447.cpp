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
			int n,k;
			cin >>n >>k;
			vector <int> v;
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					v.push_back(tmp);
				}
			sort(v.begin(),v.end());
			for(int i=v.size()-1; i>=v.size()-k; i--)
				{
					cout <<v[i] <<" ";
				}
			cout <<endl;
		}
}
