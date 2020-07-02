#include <iostream>
#include <string>
using namespace std;

#define endl "\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s;
    cin >> s;

    int n = int(s);

    if(n <= 90) {
        cout << 'A' << endl;
    }
    else{
        cout << 'a' << endl;
    }

    return 0;
}
