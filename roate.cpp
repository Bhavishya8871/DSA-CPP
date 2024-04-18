#include<iostream>
#include<vector>

int main(){
    vector<int>nums[6];
    int size=6;
    int k;
    cin>>k;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            nums[i].push_back(j);
        }
    }

    void rotate(nums,k);

    for(int i=0;i<6;i++){
         for (auto it = v[i].begin(); 
             it != v[i].end(); it++) { 
                cout<<*it<<" ";
             }

    }
}
