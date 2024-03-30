#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int k=1;
class SinhVien{
	private:
		string msv,name,cl,date;
		float gpa;
	
	public:
		SinhVien()
			{
				msv=name=cl=date;
				gpa=0;
			}
		
		friend istream &operator >>(istream &in, SinhVien &a)
			{
				cin.ignore();
				
				string s1=to_string(k),
				s2(3-s1.length(),'0');
				a.msv="B20DCCN"+s2+s1;
				getline(cin,a.name);
				getline(cin,a.cl);
				
				string tmp;
				cin >>tmp;
				if(tmp[2]!='/')
					tmp="0"+tmp;
				if(tmp[5]!='/')
					{
						tmp.insert(tmp.begin()+3,'0');
					}
				a.date=tmp;				
				cin >>a.gpa;
				++k;
				
				return in;
			}
		friend ostream &operator <<(ostream &out, SinhVien a)
			{
				cout <<a.msv <<" " <<a.name <<" " <<a.cl <<" " <<a.date <<" " <<fixed <<setprecision(2) <<a.gpa <<" " <<endl;	
				return out;	
			}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
