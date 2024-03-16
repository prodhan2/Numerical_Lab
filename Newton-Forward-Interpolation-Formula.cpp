#include<bits/stdc++.h>
using namespace std;

class forwardDifference {
private:
    double x[10], y[10][10], xx, ans = 0, h, p;
public:

    double fact(double i) {
        if (i) {
            return i * fact(i - 1); // যদি i না হয় তাহলে 1 রিটার্ন করবেন
        } else {
            return 1;
        }
    }

    double multi(double p, int i) {
        double value = p;
        for (int j = 0; j < i; j++) {
            value = value * (p - j); // পেশাদার মানুষের ভুল হচ্ছে এখানে লুপে গিয়ে পেরিয়ে গিয়েছেন 
        }
        return value;
    }

    void solved() {
        cout << "কতগুলো পয়েন্ট আছে?" << endl;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i][0]; // প্রথমদিকে x, দ্বিতীয়দিকে y এ পয়েন্ট গুলো নেয়া হচ্ছে
        }
        cout << "দেওয়া হয়েছে X মান" << endl;
        cin >> xx;

        for (int col = 1; col < n; col++) {
            for (int row = 0; row < n - col; row++) {
                y[row][col] = y[row + 1][col - 1] - y[row][col - 1]; // ফরওয়ার্ড ডিফারেন্স ফর্মুলার মধ্যে ব্যবহৃত হয়েছে
            }
        }
        ans = y[0][0];
        h = x[1] - x[0];

        p = (xx - x[0]) / h;
        for (int i = 1; i < n; i++) {
            ans += (multi(p, i) * y[0][i]) / fact(i); // প্রথম ডিফারেন্স, প্রথম লুপে গিয়ে গুন হচ্ছে তারপরে ফ্যাক্টরিয়াল দিয়ে ভাগ হচ্ছে
        }
        cout << "মান " << xx << " এর মান " << ans << " হলো" << endl; // আউটপুট দেখানো হচ্ছে
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    forwardDifference f;
    f.solved(); // মেইন ফাংশনে ক্লাস কে কল করা হচ্ছে
    return 0;
}
