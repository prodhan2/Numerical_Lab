
#include<bits/stdc++.h>
using namespace std;
class simson{
private :
    double x[100],y[100],h ,ans =0,y0,yn;

public:
    void solved()

    {
        cout<<"How many points "<<endl;
        int n ; cin>>n;
        cout<<"Give me X and Y points "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        y0 = x[0];
        yn = y[n-1];
        h = x[1] - x[0];
        ans = y0+yn;
        for(int i = 1;i<n;i++)
        {
            if(i%2!=0)
            {
                ans += 4*y[i];

            }
            else
            {
                ans += 2*y[i];
            }
        }

        ans = (h/3) *ans;
        cout<<"The answer is = "<<ans<<endl;
    }
};
int main()
{
    simson s = simson();
    s.solved();

}
