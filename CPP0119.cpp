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
			if(n%2==1)
				{
					cout <<0 <<endl;
				}
			else
			{
				int cnt=1;
				for(int i=2; i<=sqrt(n); i++)
					{
						int tmp=0; // so mu cua i
						while(n%i==0)
							{
								++tmp;
								n/=i;
							}
						if(i==2)
							cnt*=tmp;
						else
							cnt*=(tmp+1);
					}
				if(n!=1 && n!=2)
					{
					cnt*=2;
					}

				cout <<cnt <<endl;
			}

				
		}
}
