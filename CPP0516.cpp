#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

struct sel{
	int id;
	string name,gr;
	float in, out,inter;
};
bool cmp(sel a, sel b){
	if(a.inter >b.inter)
		return true;
	else
		return false;
}

int main(){
	int n;
	cin >>n;
	sel x[n];
	for(int i=0; i<n; i++)
		{
			x[i].id=i+1;
			cin.ignore();
			getline(cin,x[i].name);
			getline(cin,x[i].gr);
			cin >>x[i].in;
			cin >>x[i].out;
			x[i].inter=x[i].out-x[i].in;			
		}
	sort(x,x+n,cmp);
	for(int i=0; i<n; i++)
		{
			cout <<x[i].id <<" " <<x[i].name <<" " <<x[i].gr <<" "<<setprecision(2) <<fixed <<x[i].inter <<endl;
		}
}
