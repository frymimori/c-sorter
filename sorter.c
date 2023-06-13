void sorterA(unsigned long a, unsigned long * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned long f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterB(unsigned long a, unsigned long * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned long f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterC(unsigned long a, unsigned int * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned int f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterD(unsigned long a, unsigned int * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned int f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterE(unsigned long a, unsigned short * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned short f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterF(unsigned long a, unsigned short * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned short f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterG(unsigned long a, unsigned char * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned char f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterH(unsigned long a, unsigned char * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	unsigned char f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterI(unsigned long a, long double * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	long double f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterJ(unsigned long a, long double * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	long double f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterK(unsigned long a, double * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	double f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterL(unsigned long a, double * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	double f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterM(unsigned long a, float * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	float f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterN(unsigned long a, float * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	float f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterO(unsigned long a, long * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	long f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterP(unsigned long a, long * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	long f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterQ(unsigned long a, int * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	int f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterR(unsigned long a, int * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	int f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterS(unsigned long a, short * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	short f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterT(unsigned long a, short * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	short f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}

void sorterU(unsigned long a, char * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	char f;

	while (a != 1) {
		a--;

		if (b[a] < b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] > f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] < b[a - 1]) {
				f = b[a];
				b[a] = b[a - 1];
				b[a - 1] = f;
				d = 1;
			}
		}

		if (b[e + 1] >= b[e]) {
			e++;
		}

		while (a < c) {
			a++;

			if (b[a + 1] < b[a]) {
				f = b[a + 1];
				b[a + 1] = b[a];
				b[a] = f;
				d = 1;
			}
		}

		if (b[c - 2] <= b[c - 1]) {
			c--;
		}

		d ^= 1;
	}

	return;
}

void sorterV(unsigned long a, char * b) {
	unsigned long c = a;
	unsigned long d = 0;
	unsigned long e;
	char f;

	while (a != 1) {
		a--;

		if (b[a] > b[a - 1]) {
			d = a - 1;
			e = d;
			f = b[d];

			while (d != 0) {
				d--;

				if (b[d] < f) {
					f = b[d];
					e = d;
				}
			}

			b[e] = b[a];
			b[a] = f;
		}
	}

	e = 1;

	while (d == 0) {
		a = c;

		while (a > e) {
			a--;

			if (b[a] > b[a - 1]) {
				d = b[a];
				b[a] = b[a - 1];
				b[a - 1] = d;
				d = 1;
			}
		}

		if (b[c - 2] >= b[c - 1]) {
			c--;
		}

		if (b[e + 1] <= b[e]) {
			e++;
		}

		d ^= 1;
	}

	return;
}
