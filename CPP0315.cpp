#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
//tuong tu bai96
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s;
			getline(cin,s);
			string chk=s;
			sort(chk.begin(),chk.end());
			if(chk==s)
				{
					cout <<-1<<endl;
				}
			else
				{
					int i=s.length()-2;//tim vi tri dau tien ma tai do s[i] >s[i+1]
					while(s[i]<=s[i+1])
						{
							i--;
						}
					int pos_max=i+1; // tim phan tu dau tien be hon s[i];
					for(int j=pos_max+1; j<s.length(); j++)
						{
							if(s[j]>s[pos_max] && s[j] <s[i])
								{
									pos_max=j;
								}
						}
					swap(s[i],s[pos_max]);
//					int l=i+1,
//					r=s.length()-1;
//					while(l<r)
//						{
//							swap(s[l],s[r]);
//							++l;
//							--r;
//						}
					if(s[0]=='0')
						cout <<-1 <<endl;
					else	
						cout <<s <<endl;
				}
		}
}
