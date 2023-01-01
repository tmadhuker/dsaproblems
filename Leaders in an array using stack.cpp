class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        stack<int> s;
        int max = a[n-1];
        
        s.push(max);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=s.top()){
                max=a[i];
                s.push(max);
            }
        }
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
    }
    
};
