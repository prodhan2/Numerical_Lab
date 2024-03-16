#include <bits/stdc++.h>
using namespace std;

class NewtonsDividedDifferenceInterpolation {
public:
    int n;
    double x[10], y[10][10];
    double ans = 0, given_x;
    NewtonsDividedDifferenceInterpolation() {
        cin >> n; // নতুন ইনস্ট্যান্স তৈরি করার সময় ন থেকে n এর মান ইনপুট নেয়া হচ্ছে
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i][0]; // সমস্ত পয়েন্টের x এবং y মান ইনপুট নেয়া হচ্ছে
        }
        cin >> given_x; // প্রদত্ত x মান ইনপুট নেয়া হচ্ছে

        // বিভাজিত পার্শ্বের তালিকা তৈরি করা হচ্ছে
        for (int col = 1; col < n; col++) {
            for (int row = 0; row < n - col; row++) {
                y[row][col] = (y[row + 1][col - 1] - y[row][col - 1]) / (x[row + col] - x[row]);
            }
        }
    }

    // যে টার্মগুলো y[i] এর সাথে গুণ করা হবে
    double multiply(int i) {
        double value = 1;
        for (int k = 0; k < i; k++) {
            value *= given_x - x[k]; // y[i] এর সাথে প্রতিটি মৌলিক অংশ গুণ হচ্ছে
        }
        return value;
    }

    void solve() {
        ans = y[0][0];
        for (int i = 1; i < n; i++) {
            ans += multiply(i) * y[0][i]; // ফলাফল প্রাপ্তির জন্য প্রতিটি y[i] টার্ম সাথে যোগ করা হচ্ছে
        }
        cout << "The value at " << given_x << " is " << ans << '\n'; // প্রদত্ত x এর মান এর জন্য মান প্রদর্শন করা হচ্ছে
    }
};

int main(void) {
    NewtonsDividedDifferenceInterpolation n = NewtonsDividedDifferenceInterpolation();
    n.solve();
}
