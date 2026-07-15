class Solution {
public:
    int largestElement(vector<int>& nums) {
int largest=nums[0];

for(int i=1;i<nums.size();i++){
    if(nums[i]>largest){
        largest=nums[i];
    }
}
return largest;
    }
};



class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int secondLargest = -1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
            }
            else if (nums[i] < largest && nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }

        return secondLargest;
    }
};