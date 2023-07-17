# include <bits/stdc++.h>
using namespace std;


int solve(vector<int>& nums, int target) {
        int start=0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = end+(start-end)/2;
            if(nums[mid]>target){
                end = mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else if(nums[mid]==target){
                return mid;
            }
        }return -1;
}

int main(){
    int n,t;
    cout<<"Please enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Please Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<"Enter the target: ";
    cin>>t;
    int ans = solve(arr, t);
    cout<<ans;
}