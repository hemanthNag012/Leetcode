// Link : https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
int startInt(vector<int>& arr, int n, int k){
    int s =0;
    int e = n-1;
    int m = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[m] == k){
            ans = m;
            e = m-1;
        }else if(arr[m]>k){
            e = m-1;
        }else{
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return ans;
}

int endInt(vector<int>& arr, int n, int k){
    int s =0;
    int e = n-1;
    int m = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[m] == k){
            ans = m;
            s = m+1;
        }else if(arr[m]>k){
            e = m-1;
        }else{
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int start = startInt(arr,n,k);
    int end = endInt(arr,n,k);
    pair<int,int> ans = {start,end};
    return ans;

}
