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

float slop(float a[],int n)
{
	
	
	return((a[n]-a[1])*1.0/(n-1));
}

int main()
{
int n;
cout<<"Enter the no of Given Data Points (n) : ";
cin>>n;
float A[n+1] = {0};
float F[n+1] = {0};
float al[n+1] = {0};
float bt[n+1] = {0};



cout<<"Enter n data points :"<<"\n";
for(int i =1;i<=n;i++)
cin>>A[i];


float alpha,beta;
cout<<"Enter Value of Alpha and Beta: ";
cin>>alpha>>beta;


cout<<"Press 1 to use F1 = A1 :"<<"\n";
cout<<"Press 2 to use avg(A) as F1 :"<<"\n";
cout<<"Press 3 if you have  F1 value:"<<"\n";
int temp1;
cin>>temp1;

if(temp1==1)
al[1] = A[1];
if(temp1==2)
al[1] = avg(A,n);
if(temp1==3)
{
	
	cout<<"Enter alpha_one :";
	cin>>al[1];
	
}

cout<<"Press 1 to use b1 as slop of whole data :"<<"\n";
cout<<"Press 2 to enter custom b1 :"<<"\n";
int temp2;
cin>>temp2;
if(temp2==1)
bt[1] = slop(A,n);
if(temp2==2)
{
	cout<<"Enter your Beta_one : ";
	cin>>bt[1];
}



for(int i =2;i<=(n+1);i++)
{
	F[i] = al[i-1]+bt[i-1];
	al[i] = alpha*A[i] + (1-alpha)*F[i];
	bt[i] = beta*(al[i]-al[i-1]) + (1-beta)*bt[i-1];
}


	cout<<"\n";
		cout<<"t"<<"      "<<"Ft"<<"\n";
		
		for(int i =1;i<=(n+1);i++)
			{				
				cout<<i<<"      "<<F[i]<<"\n";
			}







return 0;
}

