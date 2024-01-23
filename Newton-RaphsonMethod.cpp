

/*

                                                                             |  \  \
  _______ __    __       __  ______  _______        ______   ______   ______   ____| ▓▓ ▓▓____   ______  _______
 /       \  \  |  \     |  \|      \|       \      /      \ /      \ /      \ /      ▓▓ ▓▓    \ |      \|       \
|  ▓▓▓▓▓▓▓ ▓▓  | ▓▓      \▓▓ \▓▓▓▓▓▓\ ▓▓▓▓▓▓▓\    |  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\  ▓▓▓▓▓▓\  ▓▓▓▓▓▓▓ ▓▓▓▓▓▓▓\ \▓▓▓▓▓▓\ ▓▓▓▓▓▓▓\
 \▓▓    \| ▓▓  | ▓▓     |  \/      ▓▓ ▓▓  | ▓▓    | ▓▓  | ▓▓ ▓▓   \▓▓ ▓▓  | ▓▓ ▓▓  | ▓▓ ▓▓  | ▓▓/      ▓▓ ▓▓  | ▓▓
 _\▓▓▓▓▓▓\ ▓▓__/ ▓▓     | ▓▓  ▓▓▓▓▓▓▓ ▓▓  | ▓▓    | ▓▓__/ ▓▓ ▓▓     | ▓▓__/ ▓▓ ▓▓__| ▓▓ ▓▓  | ▓▓  ▓▓▓▓▓▓▓ ▓▓  | ▓▓
|       ▓▓\▓▓    ▓▓     | ▓▓\▓▓    ▓▓ ▓▓  | ▓▓    | ▓▓    ▓▓ ▓▓      \▓▓    ▓▓\▓▓    ▓▓ ▓▓  | ▓▓\▓▓    ▓▓ ▓▓  | ▓▓
 \▓▓▓▓▓▓▓  \▓▓▓▓▓▓ __   | ▓▓ \▓▓▓▓▓▓▓\▓▓   \▓▓    | ▓▓▓▓▓▓▓ \▓▓       \▓▓▓▓▓▓  \▓▓▓▓▓▓▓\▓▓   \▓▓ \▓▓▓▓▓▓▓\▓▓   \▓▓
                  |  \__/ ▓▓                      | ▓▓
                   \▓▓    ▓▓                      | ▓▓
                    \▓▓▓▓▓▓                        \▓▓

*/

// ***********max element and min element *****************
//int *ma = max_element(a,a+10);
//    cout<< *ma<<endl;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// ***********foreach loop *****************
//for_each(a.begin(), a.end(), [](const int& element) {
//  cout<<element<<endl; });
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//// ***********max element position *****************
//cout <<distance(Array.begin(),max_element(Array.begin(),Array.end()));
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//// ***********Bitset *****************
//bitset<5>bset(10);
//cout<<bset<<endl;    // print korbe binary te
//bset.flip();      // sob gula bit 1 ke 0 and 0 ke 1 korbe
//cout<<bset<<endl;
//cout<<bset[0] << " " <<bset[1]<<endl;
//bset.set();     // sob gula bit 1 kore dibe
//cout<<bset<<endl;
//bset.reset();     // sob gula bit 0 kore dibe
//cout<<bset<<endl;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include<bits/stdc++.h>
using namespace std;
class NewtonRaphson{
   private :
       double x,tolarence =0.00001;
       double function(double x)
       {
          return (pow(x,3)-2*x-5);
       }
       double derivation(double x)
       {
           return (3*pow(x,2) - 2 );
       }
   public :

         solved()
         {
               while(1)
               {
                   srand(time(0));
             x = rand()%10;
             if(derivation(x) !=0)
             {
              break;
             }

         }
         double h ;

         h =  function(x)/derivation(x);
         int i=0;
         while(abs(h) >= tolarence)
         {
             cout<<"iteration "<<i++<<"x "<<x<<endl;
             h = function(x)/derivation(x);
             x = x-h;

         }
         cout<<"The answer is (3 decimal place )"<<fixed<<setprecision(3)<<x<<endl;

       }

       };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    NewtonRaphson n = NewtonRaphson();
    n.solved();
    return 0;
}

