#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;


//int count(int a[], int b[], int i, int j, int n){
//	int cnt=1;
//	while(a[i]==b[j] && i<n && j<n){
//		++cnt;
//		++i;
//		++j;
//	}
//	return cnt;
//}

//void sol(map <int,int> &mp, int a[], int n){ //first:giatri, second: do dai
//	for(int i=0; i<n; i++)
//		{
//			int sum=a[i];
//			for(int j=i+1; j<n; j++)
//				{
//					sum+=a[j];
//					mp.insert(make_pair(sum,j-i+1));
//				}
//		}
//}
struct cmp{
bool operator() (int a, int  b) {return a<b;}
};
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			int a[n], b[n];
			for(int &x :a)
				cin >>x;
			for(int &x :b)
				cin >>x;
			int max=1;
			for(int i=0; i<n; i++)
				{
					int sum1=a[i],
					sum2=b[i];
					for(int j=i+1; j<n; j++)
						{
							sum1+=a[j];
							sum2+=b[j];
							if(sum1==sum2)
								{
									if(j-i+1 >max)
										max=j-i+1;
								}
						}
				}
			cout <<max <<endl;
		}
}
