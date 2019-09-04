#include <iostream>

int main() {
	unsigned char msg[32] = "\x95\xf4\x97\xea\xba\x6b\xb6\xc\x97\x32\x30\x10\x64\x1b\x56\xab\xe1\xe2\xc8\x60\x84\x5b\x7\xfa\xdb\xcd\xa1\xc4\x9a\x4\xf7";

	for (unsigned char i = 0; i < 31; i++) {
		short val = msg[i] - (rand() % 256);
		if (val < 0) {
			val += 256;
		}
		std::cout << (char)(val);
	}
	std::cout << "\n";
}
