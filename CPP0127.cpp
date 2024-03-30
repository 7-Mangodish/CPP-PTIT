#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int pr[1000001];

void seive(int n){
	
	for(int i=0; i<=n; i++)
		pr[i]=1;
	pr[0]=pr[1]=0;
	for(int i=2; i<=sqrt(n); i++)
		{
			for(int j=i*i; j<=n; j+=i)
				pr[j]=0;
		}
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			seive(n);
			int k=0;
			for(int i=2; i<=n/2; i++)
				{
					if(pr[i] ==1 && pr[n-i]==1)
						{
							cout <<i <<" " <<(n-i) <<endl;
							++k;
							break;
						}
				}
			if(k==0) 
				cout <<-1 <<endl;
		}
}
