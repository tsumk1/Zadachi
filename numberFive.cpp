#include <iostream> 
int main () {
	int a, b, c, d, e, f;
	int g = 0;

	for(int i = 0;  i<1000000;  i++){
		a = (i/100000)%10;
		b = (i/10000)%10;
		c = (i/1000)%10;
		d = (i/100)%10;
		e = (i/10)%10;
		f = i%10;

		if(a+b+c == d+e+f) {
			g++;

		}
	}
	std::cout<<"Tickets: " << g  << "\n" << std::endl;
	 return 0; 
}
