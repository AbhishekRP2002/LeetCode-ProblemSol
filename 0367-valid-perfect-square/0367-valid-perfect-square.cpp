class Solution {
public:
    bool isPerfectSquare(int num) {
       long  int start=1 , end =num;
       long int mid;
        while(start<=end)
        {
           mid= start + (end-start)/2;
            if(mid*mid==num)
                return mid*mid==num;
            else if(mid*mid>num)
                    end= mid-1;
            else
                start=mid+1;
        }
     
          return false;
    }
};