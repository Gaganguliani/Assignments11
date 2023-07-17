# include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums){
    int n = nums.size();
    unordered_set<int> st(nums.begin(), nums.end());
    int s = st.size();
    if(st.size()>=n/2){
        return n/2;
    }return st.size();
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