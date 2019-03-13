//may perform slow for some inputs
//will print every prime factor os the given input
//feel free to modify as per your need
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int l;

l gcd(l x,l n)
{
	l c;
	while(n)
	{
		c=x%n;
		x=n;
		n=c;
	}
	return x;
	
}

l f(l a , l n)
{
	l a1=rand()%n+2;
	l result= (a*a+a1)%n;
	return result;
	
}
l polardrho(l n)
{
	srand(time(NULL));		
	if(n==1) return 1;
	if(n%2==0) return 2;
	l a=rand()%n+2;
	l b=a;
	l d=1;
	while(d==1)
	{
		a=f(a,n);
		b=f(f(b,n),n);
		d=gcd(abs(a-b),n);
		if(d>1) return d;	
	}
}
int main()
{
	l input;cin>>input;
	while(input>1)
	{
		l res=polardrho(input);
		input=input/res;
		cout<<res<<" ";
	}

}
