#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
// lam nguoc lai voi sinh hoan vi
void sol(int a[], int n){
	int i=n-1;
	while(a[i]<a[i+1]) //tim vi tri phan tu i dau tien sao cho a[i] >a[i+1]
		{
			i--;
		}
//	cout <<i;
//	int j=i+1;
//	while(a[i]>a[j])
//		{
//			--j;
//		}
//	cout <<j;
	swap(a[i],a[n]); //tim phan tu dau tien be hon a[i], vi tu khoag i+1 den n sap xep tang dan nen phan tu thoa man la a[n]
//			sort(a+i+1,a+n+1);
			int l=i+1,
			r=n;
			while(l<r)
				{
					swap(a[l],a[r]);
					++l;
					--r;
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
			for(int i=1; i<=n; i++)
				cin >>a[i];
			sol(a,n);
			for(int i=1; i<=n; i++)
				cout <<a[i] <<" ";
			cout <<endl;
		}
}
