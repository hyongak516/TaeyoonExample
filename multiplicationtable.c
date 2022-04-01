/** 
 * Copyright (c) 2022 by Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * ==============
 * Hosung.Kim
 * 2022.04.01
 * --------------
 * 한태윤 for문 예제
 * --------------
 * 
 *  ====2단====
 *  2 * 1 = 2
 *  2 * 2 = 4
 *  2 * 3 = 6
 *  2 * 4 = 8
 *  2 * 5 = 10
 *  2 * 6 = 12
 *  2 * 7 = 14
 *  2 * 8 = 16
 *  2 * 9 = 18
 * 
 * 위의 형식으로 2단부터 9단까지 구구단을 출력한다.
 * ==============
 */

#include <stdio.h>

int main()
{
    for (int i=2; i<=9; i++) {
        printf("\n====%d단====\n", i);
        for (int j=1; j<=9; j++) {
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}