#include <bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,p=0;

    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {

        cin >> k;
        arr[i] = k;
    }


    for(int j=0; j<n; j++) {
        if(arr[j]==1) {
            p++;
        }

    }
    if(p>0) {
        cout << "HARD" <<endl;

    } else if(p==0){
        cout << "EASY" <<endl;

    }



    return 0;
}