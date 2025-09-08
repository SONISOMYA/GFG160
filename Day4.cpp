//Left rotate an array by d places
//find complete explaination here
//https://medium.com/@nobitanobi0411/left-rotate-an-array-59d0454f471f

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        
        if(n==0) return;
        
        d=d%n;
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
        
    }
};
