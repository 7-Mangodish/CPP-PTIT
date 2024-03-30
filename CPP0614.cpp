#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int k=1;

class NhanVien{
	private:
		string mnv, name, sex, date, adr, mst, cop;
	public:
		NhanVien()
			{
				mnv=name=sex=date=adr=mst=cop="";
			}
		friend istream& operator >>(istream& in, NhanVien &a)
			{
				if(k==1)
					cin.ignore();
				string s=to_string(k),
				s1(5-s.length(),'0');
				a.mnv=s1+s;
				++k;
				getline(cin, a.name);
				getline(cin, a.sex);
				getline(cin, a.date);
				getline(cin, a.adr);
				getline(cin, a.mst);
				getline(cin, a.cop);
				return in;
			}
		friend ostream& operator <<(ostream& out, NhanVien a)
			{
				cout <<a.mnv <<" " <<a.name <<" " <<a.sex <<" " <<a.date <<" " <<a.adr <<" "<<a.mst <<" " <<a.cop<<endl;
				return out;
			}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
