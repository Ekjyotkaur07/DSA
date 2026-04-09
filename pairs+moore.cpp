//pair sum
//given sorted array and target sum
//brute force approach
#include <iostream>
#include <vector>
using namespace std;
vector <int> pairsum(vector <int>vec,int target){
           vector <int> ans;
           int n=vec.size();
           for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(vec[i]+vec[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
                

           }
}
int main(){
    vector <int> vec={2,7,11,13};
    int target=13;
    vector<int> ans=pairsum(vec,target);
    cout<<ans[0]<<","<<ans[1];
}