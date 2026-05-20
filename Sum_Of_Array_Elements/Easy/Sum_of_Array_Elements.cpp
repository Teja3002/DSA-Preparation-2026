public:
    int sum(int arr[], int n) {

        int ans = 0; 
        
         for(int i = 0; i < n; i++) {
            // Add the current element to the sum
            ans = ans + arr[i]; 
        }
        
        // Return the result
        return ans;
    }
};