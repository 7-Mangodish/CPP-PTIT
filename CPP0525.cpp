#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

struct sv{
	string msv,nam,cl;
	float p1,p2,p3;
};

void nhap(sv &x){
	cin.ignore();
	getline(cin,x.msv);
	getline(cin,x.nam);
	getline(cin,x.cl);
	cin >>x.p1 >>x.p2 >>x.p3;
}

bool cmp(sv a, sv b){
	return a.nam<b.nam;
}

void in(sv x[], int n){
	for(int i=0; i<n; i++)
		{
			cout <<i+1 <<" " <<x[i].msv <<" "<<x[i].nam <<" "<<x[i].cl <<" ";
			cout <<fixed <<setprecision(1) <<x[i].p1 <<" "<<x[i].p2 <<" "<<x[i].p3 <<endl;
		}
}
int main(){
	int n;
	cin >>n;
	sv a[n];
	for(int i=0; i<n; i++)
		{
			nhap(a[i]);
		}
	sort(a,a+n);
	in(a,n);
}
