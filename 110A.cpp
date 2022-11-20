#include <bits/stdc++.h>

using namespace std;

 

int main() {

    ios::sync_with_stdio(0);

    cin.tie(0);
    long long n;
    int a=0;
    cin >> n;
    string str = to_string(n);
    int size = str.size();
    long long arr[size];
    for(int i=0; i<size; i++) {
        arr[i] = int(str[i]-48);
    }

    for(int j=0; j<size; j++) {
        if(arr[j]==4 || arr[j] == 7) {
            a++;
        }
    }
    if(a==4 || a==7){
    cout << "YES" << endl;
    
    }else{
    cout << "NO"<<endl;
    }
    
    
    

    return 0;

}
