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
			for(int i=2; i<=sqrt(n); i++)
				{	int cnt=0;
					while(n%i==0)
						{
							++cnt;
							n/=i;
						}
					if(cnt !=0)
						cout <<i<<" "<<cnt <<" ";
					if(n==1) cout <<endl;

				}
			if(n!=1)
				{
					cout <<n <<" " <<1<<endl;
				}
		}
}
