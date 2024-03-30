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
			map <int,int> mp;
			for(int i=0; i<n; i++)
				{
					if(i==0)
						{
							set <int> s;
							for(int j=0; j<n; j++)
								{
									int tmp;
									cin >>tmp;
									s.insert(tmp);
								}
							for(int x:s)
								mp[x]=1;
						}
					else
						{
							set<int> s;
							for(int j=0; j<n; j++)
								{
									int tmp;
									cin >>tmp;
									s.insert(tmp);
								}			
							for(int x:s)
								{
									if(mp.find(x)!= mp.end())
										mp[x]++;
								}				
						}
				}
			int cnt=0;
			for(auto x:mp)
				{
					if(x.second==n)
						++cnt;
				}
			cout <<cnt <<endl;
		}
}
