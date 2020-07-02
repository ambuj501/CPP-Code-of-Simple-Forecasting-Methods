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


float avg(float a[],int n)
{
	float sum = 0;
	for(int i  =1;i<=n;i++)
	sum = sum + a[i];
	
	return(sum*1.0/n);
}

float sum(float a[],int n)
{
	float sm = 0;
	for(int i  =1;i<=n;i++)
	sm = sm + a[i];
	
	return(sm);
}

int main()
{

int n;
cout<<"Enter the no of Given Data Points (n) : ";
cin>>n;

float x[n+1] = {0};
float y[n+1] = {0};

cout<<"Enter n Points of X :"<<"\n";
for(int i =1;i<=n;i++)
cin>>x[i];


cout<<"Enter n Points of Y :"<<"\n";
for(int i =1;i<=n;i++)
cin>>y[i];


float x_bar = avg(x,n);
float y_bar = avg(y,n);
float x_sum = sum(x,n);
float y_sum = sum(y,n);

float ap_xy_sum = 0;
float ap_x_2_sum =0;
float ap_y_2_sum =0;
for(int i =1;i<=n;i++)
{
	ap_xy_sum = ap_xy_sum + x[i]*y[i];
	ap_x_2_sum = ap_x_2_sum + x[i]*x[i];
	ap_y_2_sum = ap_y_2_sum + y[i]*y[i];
}

float ap_ans = (ap_xy_sum*1.0)/(sqrt(ap_x_2_sum*ap_y_2_sum));

cout<<"aproximate answers :"<<"\n";
cout<<"X2_sum : "<<ap_x_2_sum<<" , "<<"Y2_sum : "<<ap_y_2_sum<<" , "<<"X_Y_Sum : "<<ap_xy_sum<<"\n";
cout<<"ap_r : "<<ap_ans<<"    ap_r^2 : "<<ap_ans*ap_ans<<"\n";

float sum_x_y_bar =0;
for(int i =1;i<=n;i++)
{
	float t1 = x[i]-x_bar;
	float t2 = y[i]-y_bar;
	sum_x_y_bar = sum_x_y_bar + t1*t2;
}


float ans = (1.0/n)*(sum_x_y_bar*1.0/(x_sum*y_sum));
cout<<"\n"<<"Exact Ans : "<<"\n";
cout<<ans;





return 0;
}

