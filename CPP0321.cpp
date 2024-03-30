#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
void res(int s[], int n){
	int l=0,
	r=n-1;
	while(l<r)
		{
			swap(s[l],s[r]);
			++l;
			--r;
		}
}

void sol(string max, string min){
//	res(max);
//	res(min);
	
	int l=max.length();
	int a[l],
	b[l];
	for(int i=0; i<l; i++)
		{
			a[i]=max[i]-'0';
		}
	for(int i=0; i<min.length(); i++)
		{
			b[i]=min[i]-'0';
		}
	res(a,l);
	res(b,min.length());
	for(int i=min.length(); i<l; i++)
		{
			b[i]=0;
		}
//	for(int x:b)
//		cout <<x;
	int kq[l],
	mer=0;
	for(int i=0; i<l; i++)
		{
			int tmp=b[i]+mer;
			if(a[i]<tmp)
				{
					kq[i]=a[i]+10-tmp;
					mer=1;
				}
			else
				{
					kq[i]=a[i]-tmp;
					mer=0;
				}
		}
	for(int i=l-1;i>=0;i--)
		cout <<kq[i];
	cout <<endl;
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s1,s2;
			getline(cin,s1);
			getline(cin,s2);
			
			string max,min;
			if(s1.length()>s2.length() )
				{
					max=s1;
					min=s2;
				}
			else if(s1.length()<s2.length())
				{
					min=s1;
					max=s2;
				}
			else
				{
					if(s1 >=s2)
						{
							max=s1;
							min=s2;							
						}
					else
						{
							min=s1;
							max=s2;
						}
				}
			
			sol(max,min);
		}
}
