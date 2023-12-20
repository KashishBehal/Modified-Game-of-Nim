class Solution{
public:
    int findWinner(int n, int A[]){
        // code here
        if(n%2 ==0){
            return 1;
        }
        int xorr=0;
        for(int i=0;i<n;i++){
            xorr=xorr^A[i];
        }
        
    if(xorr==0){
        return 1;
    }
    return 2;
    }
};
