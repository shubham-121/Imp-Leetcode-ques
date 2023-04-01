var sortColors = function(nums) {
    
     var count_0=0, count_1=0 ,count_2=0;
        var i; var n=nums.length;
        for(i=0;i<n;i++)
        { 
            if(nums[i]==0)
            count_0++;

            else if(nums[i]==1)
            count_1++;

            if(nums[i]==2)
            count_2++;
        }

        for(i=0;i<count_0;i++)
        nums[i]=0;              //replacing 0

        for(i=count_0;i<count_0 + count_1 ;i++)
        nums[i]=1;              //replacing 1

        for(i=count_0 + count_1 ;i<n; i++)
        nums[i]=2;              //replacing 2
};
