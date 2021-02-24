class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        for(int i = 1; i<arr.size(); i++){
           arr[i] = arr[i-1] + arr[i];
        }
        int sum = 0;
        for(int start = 0; start<arr.size();start++ ){
            for(int end = start;  end <arr.size() ; end +=2){
               if(start == 0){
                   sum += arr[end] + 0;
               }
                else
                    sum += arr[end] - arr[start - 1 ];
            }
        }
        return sum;
    }
    
};