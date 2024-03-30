#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

struct pp{
	string name, born;
};

bool cmp(pp a, pp b){
	string s1=a.born,
	s2=b.born;
	string tmp1,tmp2;
	tmp1=s1.substr(6,9)+s1.substr(3,4)+s1.substr(0,1);
	tmp2=s2.substr(6,9)+s2.substr(3,4)+s2.substr(0,1);
	if(tmp1<tmp2)
		return true;
	return false;
}
int main(){
	int n;
	cin >>n;
	cin.ignore();
	pp x[n];
	for(int i=0; i<n; i++)
		{
			cin >>x[i].name ;
			cin >>x[i].born;
		}
	sort(x,x+n,cmp);
	cout<<x[n-1].name <<"\n" <<x[0].name <<endl;
		
}
