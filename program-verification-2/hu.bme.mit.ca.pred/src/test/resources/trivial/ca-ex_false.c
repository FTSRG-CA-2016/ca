extern int nondet_int();

void main() {
	int x = 11;
	int i = 0;
	int sum = 0;

	assert(x > 0);

	while (i < x) {
		sum = sum + i;
		i = i + 1;
	}

	assert(i == 0);
}
