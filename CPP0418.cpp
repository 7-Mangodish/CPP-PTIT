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
			int n,m;
			cin >>n >>m;
			int a[n], 
			b[m];
			
			set <int> s,re;
			vector <int> vec;
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
					s.insert(a[i]);
					re.insert(a[i]);
				}
			for(int i=0; i<m; i++)
				{
					cin >>b[i];
					re.insert(b[i]);
				}
			sort(b,b+m);
			for(int x:b)
				{
					if(s.find(x)!=s.end())
						{
							vec.push_back(x);
						}
				}
			for(int x:re)
				cout <<x<<" ";
			cout <<endl;
			for(int x:vec)
				cout <<x <<" ";
			cout <<endl;
	}
}