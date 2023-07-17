# include <bits/stdc++.h>
using namespace std;


int solve(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        //int start=0;
        if(n==1){
            return 0;
        }map<int, int> ma;
        for(int i=0;i<n;i++){
            ma[nums[i]]+=1;
        }for(int i=0;i<n;i++){
            int no = nums[i];
            if(ma.find(no+1)!=ma.end()){
                int second = ma[no+1];
                ans = max(second+ma[no], ans);
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
    int ans = solve(arr);
    cout<<ans;
}