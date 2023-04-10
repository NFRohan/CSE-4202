#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

struct product {
    char name[100];
    int review;
    int review_count;
    char category[100];
};

int comparison_func(const void *a, const void *b) {
    struct product *internal_a = (struct product *) a;
    struct product *internal_b = (struct product *) b;

    int cmp = strcmp(internal_a->category, internal_b->category);
    if (cmp != 0) {
        return cmp;
    }

    cmp = internal_b->review - internal_a->review;
    if (cmp != 0) {
        return cmp;
    }

    cmp = internal_b->review_count - internal_a->review_count;
    if (cmp != 0) {
        return cmp;
    }

    return strcmp(internal_a->name, internal_b->name);
}

int main() {
    int n;
    scanf("%d", &n);

    struct product products[MAX];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %s", products[i].name, &products[i].review, &products[i].review_count, products[i].category);
    }

    qsort(products, n, sizeof(struct product), comparison_func);

    for (int i = 0; i < n; i++) {
        printf("\n%s %d %d %s\n", products[i].name, products[i].review, products[i].review_count, products[i].category);
    }

    return 0;
}