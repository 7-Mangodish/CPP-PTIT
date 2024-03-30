#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool chk(int n){
	if(sqrt(n)==(int)sqrt(n))
	return true;
	return false;
}

bool chk_nt(int n){
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			for(int i=4; i<=n; i++)
				{
					if(chk(i))
						{
							if(chk_nt(sqrt(i)))
								cout <<i <<" ";
						}
						
				}
			cout <<endl;
		}
}
