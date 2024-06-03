//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        if (n == 0 || d == 0) {
            return;
        }
        d = d % n;  
        for (int i = 0, j = d - 1; i < j; i++, j--) {
            std::swap(arr[i], arr[j]);
        }
        for (int i = d, j = n - 1; i < j; i++, j--) {
            std::swap(arr[i], arr[j]);
        }
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            std::swap(arr[i], arr[j]);
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends