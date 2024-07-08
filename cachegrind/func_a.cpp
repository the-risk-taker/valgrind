int functionA() {
    int b = 0;
    for (int i = 0; i < 200000; i++) {
        b += i;
    }

    return b;
}
