void sorterA(unsigned long a, unsigned long * b) {
	return;
}

void sorterB(unsigned long a, unsigned long * b) {
	unsigned long c = a;
	unsigned long d;
	unsigned long e;
	unsigned long f = 0;
	unsigned long g = 0;
	unsigned long h;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			h = b[d];

			while (d != 0) {
				d--;

				if (b[d] > h) {
					h = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = h;
		}
	}

	a = c;

	while (f == 0) {
		while (a != 1) {
			a--;

			if (b[a] < b[a - 1]) {
				d = a - 1;
				h = b[d];
				b[d] = b[a];
				b[a] = h;
				g = 1;
			}
		}

		if (g == 0) {
			f = 1;
		} else {
			a = c;
			g = 0;
		}
	}

	return;
}

void sorterC(unsigned long a, unsigned int * b) {
	return;
}

void sorterD(unsigned long a, unsigned int * b) {
	return;
}

void sorterE(unsigned long a, unsigned short * b) {
	return;
}

void sorterF(unsigned long a, unsigned short * b) {
	return;
}

void sorterG(unsigned long a, unsigned char * b) {
	return;
}

void sorterH(unsigned long a, unsigned char * b) {
	unsigned long c = a;
	unsigned long d;
	unsigned long e;
	unsigned char f = 0;
	unsigned char g = 0;
	unsigned char h;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			h = b[d];

			while (d != 0) {
				d--;

				if (b[d] > h) {
					h = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = h;
		}
	}

	a = c;

	while (f == 0) {
		while (a != 1) {
			a--;

			if (b[a] < b[a - 1]) {
				d = a - 1;
				h = b[d];
				b[d] = b[a];
				b[a] = h;
				g = 1;
			}
		}

		if (g == 0) {
			f = 1;
		} else {
			a = c;
			g = 0;
		}
	}

	return;
}

void sorterI(unsigned long a, double * b) {
	return;
}

void sorterJ(unsigned long a, double * b) {
	return;
}

void sorterK(unsigned long a, float * b) {
	return;
}

void sorterL(unsigned long a, float * b) {
	return;
}

void sorterM(unsigned long a, long * b) {
	return;
}

void sorterN(unsigned long a, long * b) {
	return;
}

void sorterO(unsigned long a, int * b) {
	return;
}

void sorterP(unsigned long a, int * b) {
	return;
}

void sorterQ(unsigned long a, short * b) {
	return;
}

void sorterR(unsigned long a, short * b) {
	return;
}

void sorterS(unsigned long a, char * b) {
	return;
}

void sorterT(unsigned long a, char * b) {
	return;
}
