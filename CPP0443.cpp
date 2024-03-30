#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int sol(vector <int> v){
	for(int i=0; i<v.size()-1; i++)
				{
					if(v[i]+1 !=v[i+1])
						return v[i]+1;
				}
	return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			vector <int> v;
			for(int i=0; i<n-1; i++)
				{
					int tmp;
					cin >>tmp;
					v.push_back(tmp);
				}	
			int cnt=v.size();
			sort(v.begin(),v.end());
			cout <<sol(v) <<endl;
		}
}
