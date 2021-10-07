#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    float x11, y11, r11, x22, y22, r22;

    cin >> T;
    float* (*num) = new float* [T];
    for (int i = 0; i < T; i++) {
        num[i] = new float[6]{};
        cin >> x11 >> y11 >> r11 >> x22 >> y22 >> r22;
        num[i][0] = x11;
        num[i][1] = y11;
        num[i][2] = r11;
        num[i][3] = x22;
        num[i][4] = y22;
        num[i][5] = r22;
    }

    for (int i = 0; i < T; i++) {
        float dis = 0;
        x11 = num[i][0];
        y11 = num[i][1];
        r11 = num[i][2];
        x22 = num[i][3];
        y22 = num[i][4];
        r22 = num[i][5];
        dis = (x22 - x11) * (x22 - x11) + (y22 - y11) * (y22 - y11);
        dis = sqrt(dis);

        if (dis == 0) {
            if (r11 == r22) {
                cout << -1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        else {
            if (dis > r11 + r22) {
                cout << 0 << endl;
            }
            else if (dis == r11 + r22) {
                cout << 1 << endl;
            }
            else if (r22 == dis + r11 || r11 == dis + r22) {
                cout << 1 << endl;
            }
            else if (r22 > dis + r11 || r11 > dis + r22) {
                cout << 0 << endl;
            }
            else {
                cout << 2 << endl;
            }
        }
    }
    for (int i = 0; i < T; i++) {
        delete[]num[i];
    }
    delete[]num;
}