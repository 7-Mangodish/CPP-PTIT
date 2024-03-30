#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool prime(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}
bool chk_inc(int n){
	int tmp=n%10;
	n/=10;
	while(n>0)
		{
			if(tmp<=n%10)
				return false;
			tmp=n%10;
			n/=10;
		}
	return true;
}


bool chk_de(int n){
	int tmp=n%10;
	n/=10;
	while(n>0)
		{
			if(tmp>=n%10)
				return false;
			tmp=n%10;
			n/=10;
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
			int dem=0;
			for(int i=pow(10,n-1)+1; i<pow(10,n); i+=2)			
				{
					if(chk_inc(i) ==true || chk_de(i)==true)
					{
						if(prime(i))		
						{
							++dem;
						}
					}
				}
			cout <<dem <<endl;
		}
}
