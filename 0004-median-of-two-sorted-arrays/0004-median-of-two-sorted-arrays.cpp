class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size()+nums2.size();
       n/=2;
        n++;
        int i=0,j=0;
        vector<double>temp;
            
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<nums2[j])temp.push_back(nums1[i++]);
            else temp.push_back(nums2[j++]);
            if(temp.size()==n)break;
        }
        while(i<nums1.size())
        {if(temp.size()==n)break;
            temp.push_back(nums1[i++]);
        }
         while(j<nums2.size())
        {if(temp.size()==n)break;
            temp.push_back(nums2[j++]);
        }
        

        
        if((nums1.size()+nums2.size())%2)return temp[temp.size()-1];
        return (temp[temp.size()-1]+temp[temp.size()-2])/2;
        
    }
};