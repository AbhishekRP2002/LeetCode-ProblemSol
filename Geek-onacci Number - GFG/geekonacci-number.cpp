#include <iostream>
using namespace std;
int Util(int a , int b , int c , int n )
{
    if(n==1)
    return a;
    if(n== 2)
    return b;
    if(n==3)
    return c;
    
    int ans = Util(a , b,c , n-1) + Util(a , b ,  c , n-2) + Util(a , b, c , n-3);
    return ans;
}
void solution()
{
    int a , b , c, n;
    cin>>a>>b>>c>>n;
    int ans = 0;
   long long int sum  = Util(a , b , c ,n);
    cout<<sum<<"\n";
}
int main() {
	int  t;
	cin>>t;
	while(t--)
	{
	    solution();
	}
	return 0;
}