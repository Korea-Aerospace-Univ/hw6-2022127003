#include <stdio.h>

int main(void) {
    int N;
    int sum = 0;
    int arr_1_num, arr_2_num;
    int arr_1[20]={};
    int arr_2[20]={};
    int *p= nullptr;
    int *q= nullptr;
    scanf("%d", &N);
    for(p=arr_1; p<arr_1+N; p++){
        scanf("%d",&arr_1_num);
        *p = arr_1_num;
    }for(q=arr_2; q<arr_2+N; q++){
        scanf("%d",&arr_2_num);
        *q = arr_2_num;
    
    } for (p= arr_1, q= arr_2 + N-1; p<arr_1+N; p++, q--){
        sum= *p+ *q;
    printf(" %d", sum);
    }   
        return 0;
}
