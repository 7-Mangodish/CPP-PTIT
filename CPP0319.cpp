#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

//void max(int a[], int n, int s){
//
//}
//
//void min(int a[], int n, int s){
//
//}

int main(){
	int m,s;
	cin >>m >>s;
	if(9*m <s || s==0)
		{
			cout <<"-1 -1";
		}
	else
		{
			int s1,s2;
			s1=s2=s-1;
			int a[m]={0},
			b[m]={0};
			a[0]=1;
			b[0]=1;
			
			int i1=0;
			while(s1>=9)
				{
					int tmp=9-a[i1];
					a[i1++]=9;
					s1-=tmp;
				}
			a[i1]+=s1;
					
			int i2=m-1;
			while(s2>=9)
				{
					int tmp=9-b[i2];
					b[i2--]=9;
					s2-=tmp;
				}
			b[i2]+=s2;
			
			for(int i:b)
				cout <<i;
			cout <<" ";
			for(int i:a)
				cout <<i;			
		}
}
