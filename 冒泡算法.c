#include<stdio.h>
int main(){
    int a[10] = {5,2,39,1,2,53,14,53,92,5};
    for(int i = 0;i < 10; i++){
        int b ;
        for(int j = 1; j < 10; j++){
            if(a[j-1]<a[j]){
                b = a[j];
                a[j]=a[j-1];
                a[j-1]=b;
            }
        }
    }
    for(int i = 0;i < 10;++i){
        printf("%d\n",a[i]);
    }
    return 0;
}


// int main(){
//     int a[10]={1,2,3,4,5,13,5,21,41,1};
//     for(int i = 0;i < 10;i++){
//         int b;
//         for(int j = 1;j < 10;j++){
//             if(a[j-1]>a[j]){
//                 b = a[j];
//                 a[j] = a[j-1];
//                 a[j-1]=b;
//                 break;
//             }
//         }
//     }
//     for(int i = 0;i<10;i++){
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }


