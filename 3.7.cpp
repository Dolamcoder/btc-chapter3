#include<bits/stdc++.h>
using namespace std;
int main ()
{
int x, y;
cin>>x>>y;
long long p=x*y;
long long s=x+y;
long long q=(long long)pow(s, 2) +p*(s*x)*(p+y);
cout<<q;
}

