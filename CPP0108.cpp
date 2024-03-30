#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
//int a[100000][10];

bool check(int a, int n){
	int k=0;
	while(a)
		{
			int tmp=a%10;
			if(tmp%2==0)
				++k;
			else
				--k;
			a/=10;
		}
	if(k==0)
		return true;
	else
		return false;
	
}
int main(){
	int n;
	cin >>n;
	int dem=0;
	for(int i=pow(10,n-1); i<pow(10,n); i++)
		{
			if(check(i,n))
				{
					++dem;
					if(dem<=10)
						{
							cout <<i <<" ";
							
						}
					else
						{
							dem=1;
							cout<<'\n' <<i <<" ";
						}
				}

		}
}
