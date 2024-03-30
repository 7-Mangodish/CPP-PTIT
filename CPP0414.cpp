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
			int n;
			cin >>n;
			set <int> s;
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					while(tmp)
						{
							s.insert(tmp%10);
							tmp/=10;
						}
				}
			for(int x:s)
				cout <<x <<" ";
			cout <<endl;
			
		}
}
