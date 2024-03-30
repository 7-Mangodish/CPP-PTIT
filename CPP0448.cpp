#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int sol(map <int,int> mp, int k){
	if(mp.find(k)==mp.end())
		return -1;
	return mp[k];
	
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n,k;
			cin >>n >>k;
			map<int,int> mp;
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					mp[tmp]++;
				}
			cout <<sol(mp,k) <<endl;
		}
}
