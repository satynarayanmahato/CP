#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

#define endl "\n"

#define ll long long

int main(){
    //enable fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        set<int> s;
        int n;
        cin >> n;
        int a[n];
        int b[n];

        bool sorted = true;

        int x;
        for(int i=0; i<n; i++){
            cin >> x;
            a[i] = x;
            if(i > 0 && x < a[i-1]){
                sorted = false;
            }
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
            if(s.size() < 2)
                s.insert(b[i]);
        }

        if(sorted){
            cout << "Yes" << endl;
        }
        else if(s.size() == 2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}