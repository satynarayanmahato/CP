#include <iostream>
using namespace std;

#define endl "\n"

#define ll long long


int main(){
    //enable fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[5];
    for(int i=0; i<5; i++)
        cin >> arr[i];

    int result = 0;
    for(int i=0; i<5; i++)
        if(arr[i] == 0)
            result = i+1;
    
    cout << result << endl;
    

    return 0;
}