void sorterA(unsigned long a, unsigned long * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned long i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterB(unsigned long a, unsigned long * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned long i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterC(unsigned long a, unsigned int * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned int i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterD(unsigned long a, unsigned int * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned int i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterE(unsigned long a, unsigned short * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned short i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterF(unsigned long a, unsigned short * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned short i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterG(unsigned long a, unsigned char * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned char i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterH(unsigned long a, unsigned char * b) {
	unsigned long c = 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	unsigned char i;

	if (a > 1) {
		d = a & 1;
		e = a - d;
		f = e;

		while (f != 0) {
			f--;

			if (b[f - 1] < b[f]) {
				i = b[f - 1];
				b[f - 1] = b[f];
				b[f] = i;
                        }

			f--;
		}

		e = a >> 1;

		while (e != 0) {
			e >>= 1;
			f = 0;
			g = e;

			while (g != 0) {
				f += c;
				g--;

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterI(unsigned long a, long double * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	long double i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterJ(unsigned long a, long double * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	long double i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterK(unsigned long a, double * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	double i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterL(unsigned long a, double * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	double i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterM(unsigned long a, float * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	float i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterN(unsigned long a, float * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	float i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterO(unsigned long a, long * b) {
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
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterP(unsigned long a, long * b) {
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
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterQ(unsigned long a, int * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	int i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterR(unsigned long a, int * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	int i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterS(unsigned long a, short * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	short i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterT(unsigned long a, short * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	short i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

void sorterU(unsigned long a, char * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	char i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
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

void sorterV(unsigned long a, char * b) {
	unsigned long c = a >> 2;
	unsigned long d;
	unsigned long e;
	unsigned long f;
	unsigned long g;
	unsigned long h;
	char i;

	if (a > 1) {
		if (c > 100) {
			c = 100;
		} else {
			if (c == 0) {
				c = 1;
			}
		}

		d = a % c;

		if (((a / c) & 1) == 0) {
			d += c;
		}

		e = 1;

		while (d > e) {
			f = a;
			g = d;

			while (e != g) {
				f--;

				if (b[f - 1] < b[f]) {
					i = b[f - 1];
					b[f - 1] = b[f];
					b[f] = i;
				}

				g--;
			}

			if (b[f - 1] >= b[f]) {
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

					if (b[e - 1] < b[e]) {
						i = b[e - 1];
						b[e - 1] = b[e];
						b[e] = i;
					}

					h--;
				}

				if (b[e - 1] >= b[e]) {
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

				if (b[f - 1] < b[f]) {
					while (b[f - 1] < b[f]) {
						h = f - c;
						i = b[f];
						b[f] = b[f - 1];
						f -= 1;

						while (
							f != h &&
							b[f - 1] < i
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
							b[f + 1] > i
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

/* Updating with non-recursive middle pivot point. */

void sorterv105(unsigned long a, unsigned char * b) {
	unsigned long c = a;
	unsigned long d;
	unsigned char e = 0;
	unsigned char f;

	if (a > 2) {
		while (e == 0) {
			a--;
			e = 1;

			if (b[1] < b[0]) {
				e = 0;
				f = b[1];
				b[1] = b[0];
				b[0] = f;
			}

			if (b[a - 1] > b[a]) {
				e = 0;
				f = b[a - 1];
				b[a - 1] = b[a];
				b[a] = f;
			}

			if (b[0] > b[a]) {
				e = 0;
				f = b[0];
				b[0] = b[a];
				b[a] = f;
			}

			a--;
			d = 1;

			while (a > d) {
				if (b[a + 1] < b[a]) {
					e = 0;
					f = b[a + 1];
					b[a + 1] = b[a];
					b[a] = f;
				}

				if (b[a] < b[d]) {
					e = 0;
					f = b[a];
					b[a] = b[d];
					b[d] = f;
				}

				if (b[d - 1] > b[d]) {
					e = 0;
					f = b[d - 1];
					b[d - 1] = b[d];
					b[d] = f;
				}

				if (b[a] < b[d]) {
					e = 0;
					f = b[a];
					b[a] = b[d];
					b[d] = f;
				}

				a--;
				d++;
			}

			a = c;
		}
	}

	return;
}
