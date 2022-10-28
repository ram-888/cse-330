

class Solution{
  public:
    bool recur(int ind,int a[],int n,int curdivi,int divi){
        if(curdivi<0){
            return false;
        }
        if(curdivi==0){
            if(ind==n){
                return true;
            }
            else{
                if(recur(ind,a,n,divi,divi)){
                    return true;
                }
            }
        }
        for(int i=ind;i<n;i++){
            swap(a[ind],a[i]);
            if(recur(ind+1,a,n,curdivi-a[ind],divi)){
                return true;
            }
            swap(a[ind],a[i]);
        }
        return false;
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
        
         int sum=0;
         for(int i=0;i<n;i++){
             sum+=a[i];
         }
         if(sum%k!=0){
             return 0;
         }
         int divi=sum/k;
         return recur(0,a,n,divi,divi);
    }
};