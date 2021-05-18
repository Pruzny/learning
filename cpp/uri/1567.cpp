#include <iostream>

using namespace std;

int main() {

    long int n, sum;
    long int s2, r2, s3, r3, s4, r4;

    cin >> n;
    while (!cin.eof()) {

        sum = 0, s2 = 0, r2 = 0, s3 = 0, r3 = 0, s4 = 0, r4 = 0;

        for (int i=1; i <= n; i++) {
            sum += i;
            s2 += i*i;
            s3 += i*i*i;
            s4 += i*i*i*i;
        }
        r2 = sum*sum - s2;
        r3 = sum*sum*sum - s3;
        r4 = sum*sum*sum*sum - s4;
        cout << "" << s2 << " " << r2 << " " << s3 << " " << r3 << " " << s4 << " " << r4 << "\n";

        cin >> n;
    }

    return 0;
}
