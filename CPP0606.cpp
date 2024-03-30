#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
class NhanVien{
	private:
		string name, sex, date, add, tax, date_t;
	public:
		friend istream &operator >>(iostream &in, NhanVien &a)
			{
				getline(in,a.name);
				getline(in,a.sex);
				
				getline(in,a.date);
				if(a.date[2] !='/')
					a.date='0'+a.date;
				if(a.date[5] !='/')
					a.date.insert(a.date.begin()+3, '0');
					
				getline(in,a.add);
				getline(in,a.tax);
				
				getline(in,a.date_t);
				if(a.date_t[2] !='/')
					a.date_t='0'+a.date_t;
				if(a.date_t[5] !='/')
					a.date_t.insert(a.date_t.begin()+3, '0');
					
				return in;
			}
		friend ostream &operator <<(ostream &out, NhanVien a)
			{
				cout <<"00001 " <<a.name <<" " <<a.date <<" " <<a.add <<" " <<a.tax <<" " <<a.date_t; 
				return out;
			}
		void nhap()
			{
				getline(cin,name);
				getline(cin,sex);
				getline(cin,date);	
				getline(cin,add);				
				getline(cin,tax);
				getline(cin,date_t);
			}
		void xuat(){
				cout <<"00001 " <<name <<" " <<sex <<" " <<date <<" " <<add <<" " <<tax <<" " <<date_t; 			
		}		
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
