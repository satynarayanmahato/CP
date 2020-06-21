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
        string s;
        cin >> s;

        int pairs = 0;

        for(int i=0; i<s.length()-1; i++){
            if(s[i]!='p' && s[i]!=s[i+1]){
                s[i] = 'p';
                s[i+1] = 'p';
                pairs++;
            }
        }
        cout << pairs << endl;
    }
    return 0;
}