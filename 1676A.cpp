#include <bits/stdc++.h>

using namespace std;

 

int main() {

     

    ios::sync_with_stdio(0);

    cin.tie(0);

    
    long long a,b;
    cin >> a;

    for(int i=0; i<a; i++) {
        string str;
        cin >> str;
        
        long long arr[5],c=0,d=0;
        for(int j=0; j<6; j++) {

            arr[j] = int(str[j]-48);
        }
        for(int k=0; k<3; k++) {
            c = c + arr[k];
        }
        for(int l=3; l<6; l++) {
            d = d + arr[l];

        }
        if(c==d) {
            cout << "YES"<< endl;
        } else {
            cout << "NO"<<endl;
        }


    }


    return 0;

}
    