#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
struct Tg{
	int h,m,s;	
};

bool cmp(Tg a, Tg b){
	ll tmp1=a.h*3600 + a.m*60 +a.s,
	tmp2=b.h*3600 + b.m*60 +b.s;
	if(tmp1 <tmp2)
		return true;
	else
		return false;
}
int main(){
	int n;
	cin >>n;
	Tg x[n];
	for(int i=0; i<n; i++)
		{
			cin>>x[i].h >>x[i].m >>x[i].s;
		}
	sort(x,x+n,cmp);
	for(Tg i:x)
		{
			cout <<i.h <<" " <<i.m <<" " <<i.s <<endl;
		}
}
