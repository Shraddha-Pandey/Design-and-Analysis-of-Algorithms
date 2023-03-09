//Bottom up - Tabulation method
//Time - O(n) Space - O(1)[only variables used]
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=n; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n];
    
    //for printing the fibonacci series
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

//Top down - Recursion + Memoization method
//Time - O(n) Space - O(n)
#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &dp){
    if(n<=1)
        return n;
    if(dp[n]!=-1)
        return dp[n];
    dp[n]=fib(n-1, dp)+fib(n-2,dp);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1);
    for(int i=0; i<=n; i++){
        dp[i]=-1;
    }
    cout<<fib(n, dp);
}

//Without DP, With recursion
#include <iostream>
using namespace std;

void fib(int n){
    static int n1=0, n2=1, n3;
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
        fib(n-1);
    }
}

int main(){
    
    int n=6;
    cout<<"0 1 ";
    fib(n-2);
    
    return 0;
}

//Without DP, Without recursion
#include <iostream>
using namespace std;

int main(){
    
    int n1=0, n2=1, n3, n;
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2; i<=n; i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
    }
    
    return 0;
}
