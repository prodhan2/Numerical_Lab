
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
class FalsePosition{
  private :
    double a,b,tolarence  = 0.00001;
    double func(double x)
    {
        return pow(x,3) - 2*x-5;
    }
  public :

    void solved()
    {    srand(time(0));
        bool ok = true;
        while(ok)
        {
            a =  -9+rand()%10;
            b = rand()%10;
            if(func(a)*func(b) <0)
            {
                ok = false;
            }
        }
        double c =0.0;
        while(a <= b)
        {
            c = (a*func(b) - b*func(a)) /(func(b) -func(a)) ;

            cout<<" a ="<<a<<" b = "<<b<<" root = " <<c<<endl;

            if(func(c) == 0.0 ||abs(func(c))<tolarence) break;

            if(func(a)*func(c) < 0) {  b = c; }
            else  {   a = c; }
        }
        cout<<"The root is (3 decimal place) = "<<fixed<<setprecision(3)<<c<<endl;
    }

    };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    FalsePosition f = FalsePosition();
    f.solved();

    return 0;
}

