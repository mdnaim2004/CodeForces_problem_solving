// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     int pos = 0;
//     for (int i = 1; i < n; i++) {
//         if (a[i] > a[pos]) {
//             pos = i;
//         }
//     }

//     swap(a[0], a[pos]);

//     long long ans = 0;
//     int curMax = 0;

//     for (int i = 0; i < n; i++) {
//         curMax = max(curMax, a[i]);
//         ans += curMax;
//     }

//     cout << ans << endl;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

long long value(vector<int> a){
    long long sum = 0;
    int curMax = 0;

    for(int i=0; i<a.size(); i++){
        curMax = max(curMax, a[i]);
        sum += curMax;
    }

    return sum;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i=0; i<n; i++)
            cin >> arr[i];

        long long ans = value(arr);

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(arr[i], arr[j]);

                ans = max(ans, value(arr));

                swap(arr[i], arr[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}