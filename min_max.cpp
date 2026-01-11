class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int min = INT_MAX;
        int max = INT_MIN;
        vector<int> result;
        int n =arr.size();
        for(int i =0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        result.push_back(min);
        result.push_back(max);
        return result;
    }
};