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

			set<int> ::reverse_iterator it=s.rbegin();
			cout <<*it <<endl;
		}
}
