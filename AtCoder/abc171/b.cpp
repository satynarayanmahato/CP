#include <iostream>
#include <algorithm>
using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n >> k;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int result = 0;

    for(int i=0; i<k; i++){
        result += arr[i];
    }

    cout << result << endl;
    

    return 0;
}
