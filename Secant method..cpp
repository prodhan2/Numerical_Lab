
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
class ScantMethod{
   private :
    double tolarence =0.0001;
   double func(double x)
    {
         return pow(x, 3) - 2 * x - 5;
    }
   public :

 double a,b;
    void solved()
    {     srand(time(0));
       while(1)
       {
           a = -9+ rand()%10;
           b = rand()%10;
           if(func(a) * func(b) <0) {break;}

       }
   double  root =  b - (func(b)*(b-a))/ (func(b) - func(a));
       while(1)
       {

           cout<<"a = "<<a<<" b = "<<b<<"root "<<root<<endl;
           if(func(root) == 0.0 || abs(root - b) < tolarence)
                { break;
           }
                 a = b;
                b = root;
              root = b - (func(b)*(b-a))/ (func(b) - func(a));

       }
        cout<<"a = "<<a<<" b ="<<b<<"root "<<root<<endl;
        cout<<"The root is = "<<root<<endl;

    }

      };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ScantMethod s = ScantMethod();
    s.solved();

    return 0;
}


