#include<bits/stdc++.h>
using namespace std;

#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define forn(i, n) fore(i, 0, n)
#define fori(i, l, r) fore(i, l, (r) + 1)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mp make_pair
#define X first
#define Y second

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

int main()
{

int n;
cout<<"Enter No of Data Point (n) :";
cin>>n;
float a[n+1] = {0};
cout<<"Enter n days value : "<<"\n";
for(int i =1;i<=n;i++)
cin>>a[i];

float yt = 0;
float t =0;
float t_sq = 0;
float yt_t = 0; 

for(int i  =1;i<=n;i++)
{
	yt = yt+a[i];
	t_sq = t_sq+i*i;
	t = t + i;
	yt_t = yt_t + a[i]*i;
}

cout<<"{t : " <<t<<",    "<<"{t_square : "<<t_sq<<" ,    "<<"{Yt : "<<yt<<",      "<<"{Yt.t :"<<yt_t<<"\n";

float b = (t*yt-n*yt_t)*1.0/(t*t-n*t_sq);

float ar = (yt-b*t)*1.0/n;

cout<<"a : "<<ar<<"\n";
cout<<"b : "<<b<<"\n";

cout<<"Enter t : ";
int ti;
cin>>ti;

cout<<"Forecast of "<<ti<<"^th Period : ";
float ans = ar+b*ti;
cout<<ans;


return 0;
}

