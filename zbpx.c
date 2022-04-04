#include <stdio.h>

int main() {
    int i;
    int nums[10];
    int temp, key, flag = -1;

    for (i = 0; i < 10; i++) {
        printf("�������%d�����֣�", i+1);
        scanf("%d", &nums[i]);
    }
    for (int j = 0; j < 10; j++) {
        for (int k = 9; k >= j; k--) {
            if (nums[j] < nums[j-1]){
                temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = temp;
            }
        }
    }
    printf("������С������������Ϊ��\n");
    for (int l = 0; l < 10; l++) {
        printf("%d ", nums[l]);
    }

    printf("������һ���жϵ����֣�");
    scanf("%d", &key);

    int left = 0;
    int right = 9;
    int middle;

    while ( left <= right ){
        middle = (left+right)/2;
        if (key < nums[middle]){
            right  = middle - 1;
        }
        else if (nums[middle] < key){
            left = middle + 1;
        } else {
            flag = middle;
            break;
        }
    }
    if (flag >= 0){
        printf("%d�������е�λ��Ϊ��%dλ", key, flag+1);
    } else {
        printf("�޴���");
    }

    return 0;
}
