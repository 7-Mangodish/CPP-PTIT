#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

struct Point{
	double x,y;
};
using namespace std;
void input(Point &s){
	cin >>s.x >>s.y;
}

double distance(Point a, Point b){
	double l=abs(a.x-b.x),
	r=abs(a.y-b.y);
	double sum=sqrt(pow(l,2) + pow(r,2));
	return sum;
	
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
