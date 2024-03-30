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
			string s1,s2;
			cin >>s1;
			cin >>s2;
			int l=(s1.length()>=s2.length())?s1.length():s2.length();
			string tmp1(l-s1.length(),'0'),
			tmp2(l-s2.length(),'0');
			s1=tmp1+s1;
			s2=tmp2+s2;
//			cout <<s1 <<" " <<s2 <<endl;	
			string kq(l,'0');
			int mer=0;
			for(int i=l-1; i>=0; i--)
				{
					int tmp=(s1[i]-'0')+(s2[i]-'0') +mer;
					if(tmp<10)
						{
							kq[i]=tmp+'0';
							mer=0;
						}
					else
						{
							kq[i]=tmp-10+'0';
							mer=1;
						}
				}			
			char tmp=mer+'0';
			if(mer==1)
				kq.insert(kq.begin()+0,tmp);
			cout <<kq <<endl;
		}
}	
