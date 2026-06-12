#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    while(N--){
        int n;
        cin >> n;
        vector<int> A(n,0);
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin >> A[i];
            mini=min(mini,A[i]);
            maxi=max(maxi,A[i]);
        }
        cout << abs(mini-maxi)+1 << "
";
    }
}