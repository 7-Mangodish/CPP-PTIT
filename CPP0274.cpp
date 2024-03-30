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
			int n;
			cin >>n;
			map <int, int> mp;
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					mp[tmp]++;
				}
				int cnt=0;
			for( pair<int,int>x :mp )
				{
					if(mp.second >1)
						cnt++;
			cout <<cnt <<endl;
		}
}
