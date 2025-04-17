  int minofthree(int A, int B, int C){
        
        if(A<B){
            if(A<C){
                return A;
            }else{
                return C;
            }
        }else{
            if(B<C){
                return B;
            }else{
                return C;
            }
        }
        
    }
    int maxofthreee(int A, int B, int C){
        
        if(A>B){
            if(A>C){
                return A;
                
            }else{
                return C;
                
            }
        }else{
            if(B>C){
                return B;
                
            }else{
                return C;
                
            }
        }
        
    }
    int maxProduct(vector<int> &arr) {
       
       int currmax = arr[0];
       int currmin = arr[0];
       int maxprod = arr[0];
       
       for(int i=1; i<arr.size(); i++){
           
           int temp = maxofthreee(arr[i], arr[i]*currmax, arr[i]*currmin);
           currmin = minofthree(arr[i], arr[i]*currmax, arr[i]*currmin);
           currmax = temp;
           
           maxprod = max(maxprod, currmax);
           
       }
       return maxprod;
    }
};
