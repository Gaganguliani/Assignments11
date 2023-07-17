# include <bits/stdc++.h>
using namespace std;


bool solve(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx = nums[0], minn = nums[0];
        
        for (int i=0; i<n; i++) {
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }

        int diff = maxx - minn;

        if (diff - k <= k) return 0;
        return diff-k-k;
}

int main(){
    int n,t;
    cout<<"Please enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Please Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<"Enter the value of k: ";
    cin>>t;
    bool ans = solve(arr, t);
    cout<<ans;
}