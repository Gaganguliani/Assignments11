# include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums){
    int n = nums.size();
    map<int, int> ma;
    for(int i=0;i<n;i++){
        ma[nums[i]]++;
    }vector<int> ans(2, 0);
    for(int i=1;i<=n;i++){
        if(ma[i]==0){
            ans[1]=i;
        }else if(ma[i]==2){
            ans[0]=i;
        }
    }return ans;
    
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
    
    
    
   vector<int> ans= solve(arr);
   cout<<ans[0]<<" "<<ans[1]<<endl;

}