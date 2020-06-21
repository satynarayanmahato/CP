#include <iostream>
using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int x;
        int loss = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x > k){
                loss += x - k;
            }
        }

        cout << loss << endl;
        
    }
    return 0;
}