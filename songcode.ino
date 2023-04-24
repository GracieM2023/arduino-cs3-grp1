void setup (){}
//#define 
int Ef0 = 19.45;
int Ef1 = 38.89;
int Bf1 = 58.27;
int Bf2 = 116.5;
int Bf3 = 233.1;
int Bf4 = 466.2;
int Bf0 = 29.14;
int G5 = 784.0;
int G6 = 1568;
int G7 = 3136;
int D0 = 18.35;

int output = 13;

int Maintempo = 285;

int tempo = 0.65 * Maintempo;

int dothalf = tempo * (10/9);
int smallbreak = 200;
int doublebreak = 400;
int fullrest = 1200;
int halfnote = Maintempo/2;
int triple = Maintempo/3;
int quarter = Maintempo/4;

void loop() 
{
for (int i=0; i<2; i++){
  
tone(output, D0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, D0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf3);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf3);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, G5);
delay(triple);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(triple);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(triple);
noTone(output);
delay(smallbreak);

tone(output, Bf3);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(halfnote);
noTone(output);
delay(doublebreak);

tone(output, Bf4);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, G5);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf3);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, G6);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, G5);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, G5);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(doublebreak);

tone(output, G5);
delay(quarter);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(quarter);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(quarter);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(quarter);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf3);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(fullrest);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, G5);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(halfnote);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, G5);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, G6);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, G6);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, G5);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf4);
delay(fullrest);
noTone(output);
delay(smallbreak);

tone(output, Bf0);
delay(fullrest);
noTone(output);
delay(smallbreak);
}
}  // put your main code here, to run repeatedly:


