# include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums, int target){
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {nums[i], nums[j]};
            }
        }
    }return {};
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
    vector<int> ans = solve(arr, t);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}