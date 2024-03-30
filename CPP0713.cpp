#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool chk=true;
void ktao(int a[],int n){
	for(int i=1; i<=n; i++)
		a[i]=i;
}

void Try(int a[],int n){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1])
		{
			i--;
		}
	if(i==0)
		{
			chk=false;
		}
	else
		{
			int j=n;
			while(a[j] <a[i])
				{
					j--;
				}
			swap(a[i],a[j]);
			sort(a+i+1, a+n+1);
		}
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			int a[n+1];
			ktao(a,n);
			while(chk)
				{
					for(int i=1; i<=n; i++)
						{
							cout <<a[i];
						}
					cout <<" ";
					Try(a,n);
				}
			chk=true;
			cout <<endl;
		}
}
