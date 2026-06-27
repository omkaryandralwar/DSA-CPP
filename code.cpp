#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int bigval=nums[nums.size()-1];
        do{
            if(nums[i] == nums[i+1]){
                for(int j=i+2;j<nums.size();j++){
                    swap(nums[j-1],nums[j]);
                }
            }
            i++;
        } while(nums[i] == bigval);
        int k = i+1;
        return k;
        
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);
    return 0;
}