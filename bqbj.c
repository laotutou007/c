#include "stdio.h"

int main() {
    // ����һֻ5Ԫ
    // ĸ��һֻ3Ԫ
    // 3ֻС��1Ԫ
    // �ʣ�100Ԫ����100ֻ�����ǹ�����ĸ����С��������ֻ��

    // ���������������100/5=20ֻ��ĸ�������100/3=33ֻ��С����(100-����-ĸ��)*3ֻ
    int g, m, x;
    int gPrice, mPrice, xPrice;
    for (g = 1; g <= 20; ++g) {
        for (m = 1; m <= 33; ++m) {
            gPrice = g * 5;
            mPrice = m * 3;
            xPrice = (100 - gPrice - mPrice);
            x = xPrice * 3; // ��С����ֻ��
            if (gPrice + mPrice + xPrice == 100 && g + m + x == 100) {
                printf("������%d ĸ����%d С����%d\n", g, m, x);
                break;
            }
        }
    }
    return 0;
}
