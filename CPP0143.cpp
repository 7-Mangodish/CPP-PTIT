#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll fb[100];

int main(){
	int n;
	cin >>n;
	while(n--)
		{
			ll tmp;
			cin >>tmp;
				ll a[100];
				a[0]=0;
				a[1]=1;
				for(int i=2; i<=92; i++)
				{
				a[i]=a[i-1]+a[i-2];
				}
			int k=0;
			for(int i=0 ;i<93; i++)
				{
					if(a[i]==tmp)
						{
							k++;
							cout <<"YES" <<endl;
						}
				}
			if(k==0)
				cout <<"NO" <<endl;
			cout <<endl;
		}
}
