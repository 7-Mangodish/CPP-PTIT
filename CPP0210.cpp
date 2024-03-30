#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int sol(int a[], int n){
	vector <int>v;
	for(int i=n-1; i>0; i--)
		{
			for(int j=i-1; j>=0; j--)
				{
					if(a[i]<=a[j])
						break;
					else
						{
							v.push_back(a[i]-a[j]);
						}
				}
		}
	if(v.size()==0)
		return -1;
	sort(v.begin(), v.end());
	return v[v.size()-1];
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			int a[n];
			for(int &x :a)
				cin >>x;
			cout <<sol(a,n) <<endl;
		}
}
