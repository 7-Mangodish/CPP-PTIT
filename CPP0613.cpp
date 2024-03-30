#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int k=1;
class SinhVien{
	private:
		string msv, nam, dat, cl;
		float gpa;
	public:
		SinhVien()
			{
				msv=nam=cl="";
				gpa=0;
			}
		friend bool cmp(SinhVien a, SinhVien b);
		friend void sapxep(SinhVien x[], int n);
		friend istream& operator >>(istream &in, SinhVien &x)
			{
				cin.ignore();
				string s1=to_string(k),
				s2(3-s1.length(),'0');
				x.msv="B20DCCN"+s2+s1;
				
				string name;
				getline(cin,name);
				stringstream ss(name);
				string s;
				while(ss >>s)
					{
						s[0]=toupper(s[0]);
						for(int i=1; i<s.length(); i++)
							s[i]=tolower(s[i]);
						x.nam =x.nam+s+" ";
					}
				getline(cin,x.cl);
				string tmp;
				getline(cin,tmp);
				if(tmp[2]!='/')
					tmp="0"+tmp;
				if(tmp[5]!='/')
					tmp.insert(tmp.begin()+3,'0');
				x.dat=tmp;
				cin>>x.gpa;
				++k;	
				return in;			
			}
		friend ostream& operator <<(ostream &on, SinhVien x)
			{
				cout <<x.msv <<" " <<x.nam <<x.cl <<" " <<x.dat <<" " <<fixed <<setprecision(2) <<x.gpa <<endl;
				return on;
			}
			
};

bool cmp(SinhVien a, SinhVien b){
	return a.gpa >b.gpa;
}

void sapxep(SinhVien x[], int n){
	sort(x,x+n,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
