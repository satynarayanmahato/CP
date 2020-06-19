#include <iostream>
#include <string>
using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        string b;
        cin >> b;

        string a;
        a = b[0];
        for(int i = 1; i < b.size()-1; i+=2){
            a += b[i];
        }
        a += b[b.size()-1];

        cout << a << endl;
    }

    return 0;
}