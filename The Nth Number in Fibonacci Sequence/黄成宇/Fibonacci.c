#include <stdio.h>

#define FIBONACCI_FIRST 1
#define FIBONACCI_SECOND 1
#define PRIME 9973

void sort(int* order, int* value, int term_num)
{
    for (int i = 0; i < term_num; i++) {
        for (int j = i + 1; j < term_num; j++) {
            if (value[order[i]] > value[order[j]]) {
                int tmp;
                tmp = order[i];
                order[i] = order[j];
                order[j] = tmp;
            }
        }
    }
}

int main()
{
    int term_value[20], term_num, fibonacci_result[20];
    scanf("%d", &term_num);
    for (int i = 0; i < term_num; i++)
        scanf("%d", term_value + i);
    int fibonacci_head, fibonacci_prv, fibonacci_tmp, fibonacci_circle;
    fibonacci_prv = FIBONACCI_FIRST;
    fibonacci_head = FIBONACCI_SECOND;
    //find the circle
    int i = 3, bool_tmp;
    for (bool_tmp = 1; bool_tmp;) {
        fibonacci_tmp = fibonacci_head;
        fibonacci_head = (fibonacci_head + fibonacci_prv) % PRIME;
        fibonacci_prv = fibonacci_tmp;
        if (fibonacci_head == 1 && fibonacci_prv == 0) {
            fibonacci_circle = i - 1;
            bool_tmp = 0;
            break;
        }
        i++;
    }
    for (int i = 0; i < term_num; i++)
        term_value[i] = term_value[i] % fibonacci_circle; //modulo the circle for each term number
    int term_order[20]; //sort the result after modulo operation
    for (int i = 0; i < term_num; i++)
        term_order[i] = i;
    sort(term_order, term_value, term_num);
    //use an order array to store the order,so we won't destroy the origin array
    int count_head = 0;
    //because we have sort the terms,count_head store which we are calculating now
    //below deal with the first three items,because we calculate from the fourth item
    for (bool_tmp = 1; bool_tmp;) {
        bool_tmp = 0;
        if (term_value[term_order[count_head]] == 0) {
            fibonacci_result[term_order[count_head++]] = 0;
            if (count_head != term_num)
                bool_tmp = 1;
        } else if (term_value[term_order[count_head]] == 1 || term_value[term_order[count_head]] == 2) {
            fibonacci_result[term_order[count_head++]] = 1;
            if (count_head != term_num)
                bool_tmp = 1;
        }
    }
    fibonacci_prev = FIBONACCI_FIRST;
    fibonacci_head = FIBONACCI_SECOND;
    for (int i = 3; i < fibonacci_circle; i++) {
        fibonacci_tmp = fibonacci_head;
        fibonacci_head = (fibonacci_head + fibonacci_prev) % PRIME;
        //modulo the PRIME after each plus to avoid overflow
        fibonacci_prev = fibonacci_tmp;
        for (bool_tmp = 1; bool_tmp;) {
            bool_tmp = 0;
            if (i == term_value[term_order[count_head]]) {
                fibonacci_result[term_order[count_head++]] = fibonacci_head;
                if (count_head != term_num)
                    bool_tmp = 1;
            }
        }
        if (count_head == term_num)
            break;
    }
    for (int i = 0; i < term_num; i++)
        printf("%d\n", fibonacci_result[i]);
    return 0;
}