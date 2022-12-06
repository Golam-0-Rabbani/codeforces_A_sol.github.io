#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
 
        int k,p,q,sum =0;
        cin >> k;
        int arr1[k],arr2[k],arr3[k],arr4[k];
        for(int j=0; j<k; j++) {
            int l;
            cin >> l;
            arr1[j] = l;
            arr2[j] = l;
            arr3[j] = l;
 
        }
        for(int m=0; m<k; m++) {
            if(arr2[0] < arr2[m]) {
                arr2[0] = arr2[m];
                p= arr2[0];
            } else {
                p= arr2[0];
 
            }
        }
 
        for(int r=0; r<k; r++) {
 
            if(arr1[r] == p) {
                arr3[r] = 0;
            }
        }
        for(int s=0; s<k; s++) {
            if(arr3[0] < arr3[s]) {
                arr3[0] = arr3[s];
                q= arr3[0];
            } else {
                q= arr3[0];
 
            }
        }
 
 
        for(int t=0; t<k; t++) {
 
            if(arr1[t] != p) {
 
                arr4[t] = arr1[t] - p;
 
            } else if(arr1[t] == p) {
 
                arr4[t] = arr1[t] - q;
                sum++;
 
            }
 
            
 
        }
        if(sum > 1) {
            for(int f=0; f<k; f++) {
 
                if(arr1[f] == p) {
                    arr4[f]= 0;
                }
            }
 
        }
 
 
        for(int z=0; z<k; z++) {
            cout << arr4[z] << " ";
        }
    }
 
 
    return 0;

}
