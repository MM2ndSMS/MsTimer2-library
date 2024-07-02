#include <MsTimer2.h>

int ledPin=13;
int ledState=LOW;

void setup() {
	pinMode(ledPin, OUTPUT);
	
	MsTimer2::set(1000, timerlSR);
	MsTimer2::start();
	
	Serial.begin(9600);
}

void loop{

}

void timerlSR {
	if(ledState == LOW)
			ledState = HIGH;
	else
			ledState = LOW;
			
	digitalWrite(ledPin, ledState);
	Serial.println("Timer CHeck");
}
