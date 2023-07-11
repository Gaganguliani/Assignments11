# include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums){
    int n = nums.size();
    int carry=1;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(nums[i]==9 && carry==1){
            ans.push_back(0);
            carry=1;
        }else if(carry==1){
            ans.push_back(nums[i]+1);
            carry=0;
        }else if(carry==0){
            ans.push_back(nums[i]);
        }
    }if(carry==1){
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    return ans;
    
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
    
    vector<int> ans = solve(arr);
    for(auto it: ans){
        cout<<it<<" ";
    }
}