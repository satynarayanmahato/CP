#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

#define endl "\n"

int main(){
    //enable fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        set<int> r, c;

        int arr[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];

                if(arr[i][j] == 1){
                    r.insert(i), c.insert(j);
                }
            }
        }

        int mn = min(n - r.size(), m - c.size());
        if(mn % 2 == 1){
            cout << "Ashish" << endl;
        }
        else{
            cout << "Vivek" << endl;
        }
    }

    return 0;
}