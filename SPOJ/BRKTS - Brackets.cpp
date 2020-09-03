#include <bits/stdc++.h>
using namespace std;
int main() {
int T ;
cin>> T ;
  while(T--){
    string s ;
     cin>> s ;
     int on = 0  ,  of = 0 ;
     bool f = true ;
     for(int i=0 ; i < s.size() ; i++){
        if(s[i] == '{')
            on++;
        else if (s[i] == '}')
            of++;
            if(of > on)
            {
                f = false ;
                break ;
            }
     }
     if( f && on == of )
        cout<<":)"<<endl;

      else
         cout<<":("<<endl;
  }
}
