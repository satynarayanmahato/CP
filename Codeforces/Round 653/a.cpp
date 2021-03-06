#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

#define endl "\n"
#define PRIME 1000000007

#define ll long long

#define f(i,a,n) for(int i = a; i < n; i++)
#define fs(i,a,n,k) for(int i = a; i < n; i+=k)

#define fr(i,a,n) for(int i = n; i > a; i--)
#define frs(i,a,n,k) for(int i=n; i>a; i-=k)

#define out1(a) cout << a << endl
#define out2(a,b) cout << a << " " << b << endl
#define out3(a,b,c) cout << a << " " << b << " " << c << endl


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //enable fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int num=(n/x)*x;
        num+=y;
        if(num>n)num-=x;
        cout<<num<<"\n";
    }

    return 0;
}