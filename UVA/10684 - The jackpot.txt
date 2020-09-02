#include <bits/stdc++.h>

using namespace std;
int n  , arr[10005];
int KAL(int aray[] , int l ){
int CEM = 0  , HM = 0 ;
   for(int i=0 ; i < l ; i++){
    CEM = max( aray[i] , CEM + aray[i] ) ;
     HM = max( HM , CEM ) ;
   }
       return HM ;

}

int main()
{
    while(true){
      cin>> n ;
       if(n==0) break;

       for(int i=0 ; i < n ; i++){
        cin>> arr[i] ;
       }
       if(KAL(arr,n)>0)
            cout<<"The maximum winning streak is "<< KAL(arr,n) <<".\n";
        else
            cout<<"Losing streak.\n";



    }
}
