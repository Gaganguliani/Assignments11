# include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int target){
    int n = nums.size();
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }return start;
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