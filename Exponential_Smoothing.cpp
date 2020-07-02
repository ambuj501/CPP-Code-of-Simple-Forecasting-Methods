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


int main()
{

int n;
cout<<"Enter the no of Given Data Points (n) : ";
cin>>n;
float A[n+1] = {0};
float F[n+1] = {0};

cout<<"Enter n data points :"<<"\n";
for(int i =1;i<=n;i++)
cin>>A[i];

float alpha;
cout<<"Enter Value of Alpha : ";
cin>>alpha;


cout<<"Press 1 to use F1 = A1 :"<<"\n";
cout<<"Press 2 to use avg(A) as F1 :"<<"\n";
cout<<"Press 3 if you have  F1 value:"<<"\n";
int temp;
cin>>temp;


if(temp==1)
	{
		 F[1] = A[1];
		 cout<<"\n";
		 cout<<"t"<<"      "<<"Ft"<<"\n";
		 cout<<1<<"      "<<F[1]<<"\n";
			for(int i =2;i<=(n+1);i++)
			{
				F[i] = alpha*A[i-1] + (1-alpha)*F[i-1];
				cout<<i<<"      "<<F[i]<<"\n";
			}	
	}
else if(temp==2) 
	{
		F[1] = avg(A,n);
		cout<<"\n";
		cout<<"t"<<"      "<<"Ft"<<"\n";
		cout<<1<<"      "<<F[1]<<"\n";
		for(int i =2;i<=(n+1);i++)
			{
				F[i] = alpha*A[i-1] + (1-alpha)*F[i-1];
				cout<<i<<"      "<<F[i]<<"\n";
			}
		
	}
else
{
	int f1;
	cout<<"Enter F1 :";
	cin>>f1;
	F[1] = f1;
	cout<<"\n";
	cout<<"t"<<"      "<<"Ft"<<"\n";
	cout<<1<<"      "<<F[1]<<"\n";
	for(int i =2;i<=(n+1);i++)
			{
				F[i] = alpha*A[i-1] + (1-alpha)*F[i-1];
				cout<<i<<"      "<<F[i]<<"\n";
			}
}







return 0;
}

