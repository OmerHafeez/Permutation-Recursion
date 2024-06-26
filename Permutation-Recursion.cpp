#include<iostream>
using namespace std;
long permute(int n, int r);
int main()
{
	int n,r;
	long long int ans;
	cout<<"Enter the Number 1 "<<endl;
	cin>>n;
	cout<<"Enter the Number 2 "<<endl;
	cin>>r;
	ans=permute(n,r);
	cout<<ans;
}


long permute(int n, int r)
{
    if (r == 0) {
        return 1;
    } else {
        return n * permute(n-1, r-1);
    }
}