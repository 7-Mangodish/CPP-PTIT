#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int pos(char a[], int n){
	if(a[n+1] !='8')
		return n;
	if(a[n+2] !='4')
		return n;
	
	return n+2;
	
}
int main(){
	int t; cin >>t;
	cin.ignore();
	while(t--)
		{
			char a[20];
			int ts[20]={0};
			cin >>a;
			for(int i=0;i<strlen(a); i++)
				{
					if(a[i]=='0')
						{
							if(pos(a,i)==i+2)
								{
									for(int j=i; j<=pos(a,i); j++)
									ts[j]=1;
								}
						}
				}
	
			
			for(int i=0; i<strlen(a); i++)
				if(ts[i]!=1) cout <<a[i];
			cout <<endl;
		}
}
