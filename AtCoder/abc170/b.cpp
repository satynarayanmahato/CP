#include <iostream>
using namespace std;

#define endl "\n"

int main(){
    //enable fast I/O
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x,y;
    cin >> x >> y;

    int a=0, b = x;

    bool result = false;

    while(a<=x){
        if(a*2 + b*4 == y){
            result = true;
            break;
        }
        a++;
        b--;
    }

    if(result){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}