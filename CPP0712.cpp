#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int a[21], n, k;

void ktao(){
	cin >>n >>k;
	
	for(int i=1; i<=n; i++)
		a[i]=i;	
}

void inkq(){
	for(int i=1; i<=k; i++)
		cout <<a[i];
	cout <<" ";
}
void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++)
		{
			a[i]=j;
			if(i==k)
				inkq();
			else
				Try(i+1);
		}
}

int main(){
	int t;
	cin >>t;
	while(t--)
	{
		ktao();
		Try(1);
		cout <<endl;
	}

}
