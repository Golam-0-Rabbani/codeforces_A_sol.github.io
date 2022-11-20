#include <bits/stdc++.h>

using namespace std;

 

int main() {

     

    ios::sync_with_stdio(0);

    cin.tie(0);

    int n;
    cin >> n;
    while(n--) {
        int p,l;
        string str;
        cin >> p;
        l = p*2;
        
        cin >> str;
        sort(str.begin(),str.end());
        for(int i=0; i<p; i++) {
            if(str[i]==str[i+1]) {
                l--;
            }
        }
        cout << l << endl;
    }

    return 0;

}
