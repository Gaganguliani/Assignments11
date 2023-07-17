# include <bits/stdc++.h>
using namespace std;


bool solve(vector<int>& nums) {
        int n = nums.size();
        bool isIncreasing = false, isDecreasing = false;
        for(int i = 0; i < n-1; i++) {
            if(nums[i] < nums[i+1])
                isIncreasing = true;
            else if(nums[i] > nums[i+1])
                isDecreasing = true;
            if(isIncreasing & isDecreasing) return false;
        }
        return true;
}

int main(){
    int n,t;
    cout<<"Please enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Please Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = solve(arr);
    cout<<ans;
}