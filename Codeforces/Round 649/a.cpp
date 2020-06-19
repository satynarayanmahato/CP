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
        int n, x;
        cin >> n >> x;

        int sum = 0;
        int l=-1, r;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
            if(arr[i]%x){
                if(l==-1)   l = i; // This will work only once
                r = i;  // This will find the rightmost element which is not divisible by x.
            }
        }

        if(sum % x != 0){
            cout << n << endl;
        }
        else if(l == -1){
            cout << -1 << endl;
        }
        else{
            cout << n - min(l+1, n-r) << endl;  // This will find which subarray is greater, leftmost or rightmost
        }
    }

    return 0;
}