#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define endl "\n"

#define ll long long

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
        int n;
        cin >> n;

        int ans = 0;
        while(true){
            if(n == 1){
                break;
            }
            else if(n%6 == 0){
                ans += 1;
                n /= 6;
            }
            else if(n%3 == 0){
                ans += 2;
                n /= 3;
            }
            else{
                ans = -1;
                break;
            }
        }

        out1(ans);
    }

    return 0;
}