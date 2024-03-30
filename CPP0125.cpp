#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

//void seive(int l, int r){
//	int pr[r-l+1];
//	for(int i=0; i<r-l+1; i++)
//		pr[i]=1;
//	for(int i=2; i<=sqrt(r); i++)
//		{
//			for(int j=(l+i-1)/i*i; j<=r; j+=i)
//				{
//					pr[j-l]=0;
//				}
//		}
//
//	for(int i=l; i<=r; i++)
//		{
//			if(pr[i-l]==1)
//				{
//					cout <<i <<" ";
//				}
//		}
//}

bool chk(int n){
	if(n==0 || n==1) return false;
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}
int main(){
	int l, r;
	cin >>l >>r;
	for(int i=min(l,r); i<=max(l,r); i++)
		{
			if(chk(i))
				cout <<i <<" ";
		}
}
