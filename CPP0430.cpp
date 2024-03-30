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
					s.insert(tmp);
				}
			set <int> ::iterator it=s.begin();
			set <int> ::reverse_iterator rit=s.rbegin();
			int cnt=0;	
			for(int i=*it; i<=*rit; i++)
				{
					if(s.find(i)==s.end() )
						++cnt;
				}	
			cout <<cnt <<endl;	
		}
}