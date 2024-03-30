#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;cin >>n;
	double sum=0;
	for(float i=1; i<=n/2; i++)
		{
			sum=sum+(1/i)+(1/(n-i+1));
		}
	cout <<setprecision(4) <<fixed <<sum;
}
