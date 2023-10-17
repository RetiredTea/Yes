#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

int main(){
    int i = 0,max_ind, min_ind, len_q,z;
    int q[101];
    char end1;
	scanf("%d%c", &z, &end1);
	do {
		scanf("%d%c", &q[i], &end1);
		i += 1;
	} while (end1 != '\n');
    len_q = i;
    max_ind = abs_max(q, len_q); 
    min_ind = abs_min(q ,len_q); 
    switch(z)
    {
    case 0:
        printf("%d\n", q[max_ind]);
        break;
    case 1:
        printf("%d\n", q[min_ind]);
        break;
    case 2 :
        printf("%d\n", diff(q, max_ind, min_ind));
        break;
    case 3 :
        printf("%d\n", sum(q , len_q, max_ind));
        break;
    default:
        printf("Данные некорректны\n");
    }
    return 0;
}
