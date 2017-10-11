#include <stdio.h>
#include <stdlib.h>

int len, i, j, temp;
int *a, *b;
int bubble_sort();

int main(){
    printf("Length: \n");
    scanf("%d", &len);
    int mas[len];
    printf("Values of massive: \n");
    for (i = 0; i < len; i++)
        scanf("%d", &mas[i]);
    bubble_sort_pointer(mas);
    printf("Bubble sort with pointers: ");
    for (i=0; i < len; i++)
        printf("%d ", mas[i]);
    return 0;
}

int bubble_sort_pointer(int *massive){
    for (i = 0; i < len-1; i++){
        for (j = 0; j < len - 1; j++){
            a = &massive[j];
            b = &massive[j+1];
            if (*a > *b){
                temp = *a;
                *a = *b;
                *b = temp;
            }
        }
    }
}
