
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
#include <bits/stdc++.h>
using namespace std;

class CurveFitting
{
public:
    int n;
    double x[10], y[10];
    double a, b;

    CurveFitting()
    {
        cout << "Enter the number of data points: ";
        cin >> n;

        cout << "Enter the data points (x y):" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
    }

    void solve()
    {
        double sumxy = 0, sumx = 0, sumy = 0, sumxx = 0;

        for (int i = 0; i < n; i++)
        {
            sumx += x[i];
            sumy += y[i];
            sumxx += x[i] * x[i];
            sumxy += x[i] * y[i];
        }

        b = (sumxy - (sumx * sumy) / n) / (sumxx - (sumx * sumx) / n);
        a = (sumy / n) - b * (sumx / n);

        cout << "a = " << a << endl
             << "b = " << b << endl;
        cout << "Equation: y = " << a << " + " << b << "x" << endl;
    }
};

int main()
{
    CurveFitting c = CurveFitting();

    // Example data points for illustration
    // You can input your own data points as well
    // Example: 3 data points (1 2), (2 4), (3 6)
    // Output: a = 0, b = 2, Equation: y = 0 + 2x
    c.solve();

    return 0;
}

/*3
1 2
2 4
3 6
Output: a = 0, b = 2, Equation: y = 0 + 2x



