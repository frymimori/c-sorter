void sorter(unsigned long a, unsigned char * b, unsigned char c) {
	unsigned long d = a;
	unsigned long e;
	unsigned long f;
	unsigned char g = 0;
	unsigned char h = 0;
	unsigned char i;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			e = a - 1;
			f = e;
			i = b[e];

			while (e != 0) {
				e--;

				if (b[e] > i) {
					i = b[e];
					f = e;
				}
			}

			b[f] = b[a];
			b[a] = i;
		}
	}

	a = d;

	while (g == 0) {
		while (a != 1) {
			a--;

			if (b[a] < b[a - 1]) {
				e = a - 1;
				i = b[e];
				b[e] = b[a];
				b[a] = i;
				h = 1;
			}
		}

		if (h == 0) {
			g = 1;
		} else {
			a = d;
			h = 0;
		}
	}

	return;
}
