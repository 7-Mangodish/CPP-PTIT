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
			k=0;
			cin >>n;
			int a[n];
			for(int i=0; i<n; i++)
				cin >>a[i];
			set <int> s;
			for(int i=0; i<n; i++)
				{
					if(s.find(a[i])==s.end())
						s.insert(a[i]);
					else
						{
							cout <<a[i] <<endl;
							++k;
							break;
						}
				}
			if(k==0)
				cout <<-1 <<endl;
		}
}
