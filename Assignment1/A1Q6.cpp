# include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==0){
                swap(nums[i], nums[j]);
            }else{
                break;
            }
        }
    }for(auto it: nums){
        cout<<it<<" ";
    }
    
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
    
    
    
    solve(arr);

}