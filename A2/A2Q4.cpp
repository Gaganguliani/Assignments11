# include <bits/stdc++.h>
using namespace std;


int solve(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int ans1= nums[n-1]*nums[n-2]*nums[n-3];
        int ans2= nums[0]*nums[1]*nums[n-1];
        return max(ans1,ans2);
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
    int ans = solve(arr);
    cout<<ans;
}