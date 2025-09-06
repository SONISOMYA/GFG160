class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest =-1;
        int second_largest = -1;
        for(int num:arr){
            if(num>largest){
                second_largest= largest;
                largest = num;
            }
            else if(num<largest && num>second_largest){
                second_largest = num;
            }
        }
        return second_largest;
        
    }
};
