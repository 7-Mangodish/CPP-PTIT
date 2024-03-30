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
			double x1,y1,x2,y2;
			cin >>x1 >>y1 >>x2 >>y2;
			double tmp1=abs(x1-x2),
			tmp2=abs(y1-y2);
			cout <<setprecision(4) <<fixed <<sqrt(pow(tmp1,2) + pow(tmp2,2)) <<endl;
		}
}
