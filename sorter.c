void sorterA(unsigned long a, unsigned long * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned long f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterB(unsigned long a, unsigned long * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned long f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterC(unsigned long a, unsigned int * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned int f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterD(unsigned long a, unsigned int * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned int f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterE(unsigned long a, unsigned short * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned short f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterF(unsigned long a, unsigned short * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned short f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterG(unsigned long a, unsigned char * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned char f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterH(unsigned long a, unsigned char * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	unsigned char f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterI(unsigned long a, long double * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	long double f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterJ(unsigned long a, long double * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	long double f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterK(unsigned long a, double * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	double f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterL(unsigned long a, double * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	double f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterM(unsigned long a, float * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	float f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterN(unsigned long a, float * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	float f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterO(unsigned long a, long * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	long f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterP(unsigned long a, long * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	long f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterQ(unsigned long a, int * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	int f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterR(unsigned long a, int * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	int f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterS(unsigned long a, short * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	short f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterT(unsigned long a, short * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	short f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterU(unsigned long a, char * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	char f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] > f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterV(unsigned long a, char * b) {
	unsigned long c = a - 1;
	unsigned long d = 0;
	unsigned long e;
	char f;

	while (a != 0) {
		d = a;
		e = a;
		f = b[a];

		while (d != 0) {
			d--;

			if (b[d] < f) {
				f = b[d];
				e = d;
			}
		}

		b[e] = b[a];
		b[a] = f;
		a--;
	}

	return;
}

void sorterV103(long a, long * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	long i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d != e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] > b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] <= b[f]) {
				e++;
			}
		}

		e = a - d;
		f = e;

		while (f != 0) {
			g = 1;

			while (g != c) {
				e = f;
				h = c;

				while (g != h) {
					e--;

					if (b[e - 1] > b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] <= b[e]) {
					g++;
				}
			}

			f -= c;
		}

		e = (a / c) - 1;

		while (e != 0) {
			e >>= 1;
			f = 0;
			g = e;

			while (g != 0) {
				f += c;
				g--;

				if (b[f - 1] > b[f]) {
					while (b[f - 1] > b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] > i
						) {
							b[f] = b[f - 1];
							f--;
						}

						b[f] = i;
						h += c << 1;
						f = h - c;
						h--;
						i = b[f];

						while (
							f != h &&
							b[f + 1] < i
						) {
							b[f] = b[f + 1];
							f++;
						}

						b[f] = i;
						f = (h + 1) - c;
					}
				}

				f += c;
			}

			if (
				a != (d + f) ||
				e == 0
			) {
				f += c;

				if (b[f - 1] > b[f]) {
					while (b[f - 1] > b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] > i
						) {
							b[f] = b[f - 1];
							f--;
						}

						b[f] = i;
						h += c + d;
						f = h - d;
						h--;
						i = b[f];

						while (
							f != h &&
							b[f + 1] < i
						) {
							b[f] = b[f + 1];
							f++;
						}

						b[f] = i;
						f = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}
