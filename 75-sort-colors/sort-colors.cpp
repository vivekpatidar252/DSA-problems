class Solution {
public:
    void sortColors(vector<int>& nums)
    {
    int Total_Zeroes = 0;
    int Total_Ones = 0;
    int Total_Two = 0;

    for(int i = 0 ; i<nums.size() ; i++)
    {
        if(nums[i]==0)
        {
          Total_Zeroes++;
        }

        else if (nums[i]==1)
        {
          Total_Ones++;
        }

        else
        {
            Total_Two++;
        }
    } 

    for(int i = 0 ; i <Total_Zeroes ; i++)
    {
        nums[i] = 0;
    }   

    for(int i = Total_Zeroes ; i < (Total_Zeroes+ Total_Ones) ; i++)
    {
        nums[i]  = 1;
    }

    for(int i =(Total_Zeroes + Total_Ones) ; i < nums.size() ; i++)
    {
        nums[i] = 2;
    }

    }
};