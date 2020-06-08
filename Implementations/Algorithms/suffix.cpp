#include <string>

bool isSuffix(string s, string subS){
    int n = s.length();     // Length of original string 's'
    int n2 = subS.length();     // Length of substring 'subS'

    // if substring is bigger than original string
    if(n2 > n){
        return false;
    }

    // we compare all the characters from the end
    for(int i=n, j=n2; j>0; i--, j--){  // i is for original string and j is for sub-string
        if(s[i] != subS[j])
            return false;
    }

    return true;
}