
const int button1Pin = 8;  
const int led1Pin = 2;   
int button1State = 0;  


const int button2Pin = 9;  
const int led2Pin = 3;   
int button2State = 0;  


const int button3Pin = 10;  
const int led3Pin = 4;   
int button3State = 0;  

void setup() {

  	pinMode(led1Pin, OUTPUT);
	pinMode(led2Pin, OUTPUT);
	pinMode(led3Pin, OUTPUT);

 	pinMode(button1Pin, INPUT);
	pinMode(button2Pin, INPUT);
	pinMode(button3Pin, INPUT);
}

void loop() {

  	button1State = digitalRead(button1Pin);
	button2State = digitalRead(button2Pin);
	button3State = digitalRead(button3Pin);


    if (button1State == HIGH) {

      digitalWrite(led1Pin, HIGH);
    } else {

      digitalWrite(led1Pin, LOW);
    }


	if (button2State == HIGH) {

      digitalWrite(led2Pin, HIGH);
    } else {

      digitalWrite(led2Pin, LOW);
    }

    if (button3State == HIGH) {

      digitalWrite(led3Pin, HIGH);
    } else {

      digitalWrite(led3Pin, LOW);
    }
}
