#include <stdio.h>
#include <stdlib.h>

int len, i, j, temp;
int bubble_sort();

int main()
{

    printf("Length: \n");
    scanf("%d", &len);
    int mas[len];
    printf("Values of massive: \n");
    for (i = 0; i < len; i++)
        scanf("%d", &mas[i]);
    bubble_sort(mas);
    printf("Bubble sort: ");
    for (i=0; i < len; i++)
        printf("%d ", mas[i]);
    return 0;
}
int bubble_sort(int *massive){
    for (i = 0; i < len-1; i++){
        for (j = 0; j < len - 1; j++){
            if (massive[j] > massive[j+1]){
                temp = massive[j];
                massive[j] = massive[j+1];
                massive[j+1] = temp;
            }
        }
    }
}
