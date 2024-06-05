//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
         int sumA = 0, sumB = 0;
        
        
        for (int i = 0; i < n; ++i) {
            sumA += a[i];
        }
        
        
        for (int i = 0; i < m; ++i) {
            sumB += b[i];
        }
        
        
        if ((sumA - sumB) % 2 != 0) return -1;
        
        int targetDiff = (sumA - sumB) / 2;
        
        
        unordered_set<int> setA;
        for (int i = 0; i < n; ++i) {
            setA.insert(a[i]);
        }
        
        
        for (int i = 0; i < m; ++i) {
            if (setA.find(b[i] + targetDiff) != setA.end()) {
                return 1;
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends