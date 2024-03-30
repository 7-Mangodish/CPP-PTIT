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
			int n, x;
			cin >>n >>x;
			multiset <int> s;
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					s.insert(tmp);
				}
			int k=0;
			for(int i:s)
				{
					int tmp=i-x;
					if(s.find(tmp) !=s.end())
						{
							k++;
							break;
						}
				}
			if(k==0)
				cout <<-1 <<endl;
			else
				cout <<1 <<endl;
		}
}
