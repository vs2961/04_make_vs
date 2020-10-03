int prob1() {
    int i;
    int sum = 0;
    for (i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int prob5() {
    int isAns = 0;
    int curr = 1;
    while (isAns == 0) {
        int i;
        isAns = 1;
        for (i = 2; i <= 20; i++) {
            if (curr % i != 0) {
                isAns = 0;
                break;
            }
        }
        curr++;
    }
    return curr - 1;
}

int prob6() {
    int i;
    int sum_square = 0;
    for (i = 0; i <= 100; i++) {
        sum_square += i * i;
    }
    int square_sum = 0;
    for (int i = 0; i <= 100; i++) {
        square_sum += i;
    }
    return sum_square - (square_sum * square_sum);
}

int prob9() {
    int i;
    int j;
    int k;
    for (i = 0; i < 1000; i++) {
        for (j = 0; j < i; j++) {
            for (k = 0; k < j; k++) {
                if (i * i == j * j + k * k && i + j + k == 1000) {
                    return i * j * k;
                }
            }
        }
    }
}
