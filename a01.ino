// a01.ino
class LED{
	public:
	LED(int pin);
	LED(int pin,int flasht);
	int a,b;
	int ab(void);



}

LED::LED(int pin){
	pinMode(pin, output);
}


void LED::ab(void){
	return(a*b);
}

void main {


	
}

