void sorterA(unsigned long a, unsigned long * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned long i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterB(unsigned long a, unsigned long * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned long i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterC(unsigned long a, unsigned int * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned int i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterD(unsigned long a, unsigned int * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned int i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterE(unsigned long a, unsigned short * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned short i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterF(unsigned long a, unsigned short * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned short i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterG(unsigned long a, unsigned char * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned char i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterH(unsigned long a, unsigned char * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned char i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = (e - d) + 1;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		if (
			d == 3 &&
			b[a - 2] < b[a - 1]
		) {
			i = b[a - 1];
			b[a - 1] = b[a];
			b[a] = i;
		}

		e--;

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterI(unsigned long a, long double * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	long double i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterJ(unsigned long a, long double * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	long double i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterK(unsigned long a, double * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	double i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterL(unsigned long a, double * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	double i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterM(unsigned long a, float * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	float i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterN(unsigned long a, float * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	float i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterO(unsigned long a, long * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	long i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterP(unsigned long a, long * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	long i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterQ(unsigned long a, int * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	int i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterR(unsigned long a, int * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	int i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterS(unsigned long a, short * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	short i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterT(unsigned long a, short * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	short i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterU(unsigned long a, char * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	char i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] > b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] > b[g]) {
					while (b[g - 1] > b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] > i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] < i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}

void sorterV(unsigned long a, char * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	char i;

	if (a > 1) {
		d = (a & 1) + 2;
		e = a;
		f = e - d;

		while (e != f) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}
		}

		while (e != 0) {
			e--;

			if (b[e - 1] < b[e]) {
				i = b[e - 1];
				b[e - 1] = b[e];
				b[e] = i;
			}

			e--;
		}

		e = (a >> 1) - 1;

		while (e != 0) {
			e >>= 1;
			f = e;
			g = 0;

			while (f != 0) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c << 1;
						g = h - c;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - c;
					}
				}

				f--;
				g += c;
			}

			if (a != (d + g)) {
				g += c;

				if (b[g - 1] < b[g]) {
					while (b[g - 1] < b[g]) {
						h = g - c;
						i = b[g];
						b[g] = b[g - 1];
						g--;

						while (
							g != h &&
							b[g - 1] < i
						) {
							b[g] = b[g - 1];
							g--;
						}

						b[g] = i;
						h += c + d;
						g = h - d;
						h--;
						i = b[g];

						while (
							g != h &&
							b[g + 1] > i
						) {
							b[g] = b[g + 1];
							g++;
						}

						b[g] = i;
						g = (h + 1) - d;
					}
				}

				d += c;
			}

			c <<= 1;
		}
	}

	return;
}
