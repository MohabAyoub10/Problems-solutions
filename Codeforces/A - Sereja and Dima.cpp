#include <bits/stdc++.h>

using namespace std;

int n , Spoints=0 , Dpoints=0;
deque <int> cards ;

int main() {

cin>> n ;
for(int i=0 ; i < n ; i++){
    int x ;
     cin>> x ;
     cards.push_back(x) ;
}

 while(cards.size()>0)
    {
        Spoints+=max(cards.front(), cards.back());
          if(cards.front()>cards.back())
            cards.pop_front();

           else
            cards.pop_back();

         if(cards.size()==0)
            break;

        Dpoints+=max(cards.front(), cards.back());

        if(cards.front()>cards.back())
            cards.pop_front();
        else
        cards.pop_back();

         if(cards.size()==0)
            break;
    }
cout<<Spoints<<" "<<Dpoints<<endl;
}
