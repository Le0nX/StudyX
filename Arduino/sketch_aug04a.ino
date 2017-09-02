
// display 1234
// select pin for cathode
int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int dp = 8;
// select pin for anode
int d4 = 9;
int d3 = 10;
int d2 = 11;
int d1 = 12;
// set variable
long n = 1230;
int x = 100;
int del = 55; // fine adjustment for clock
int lamp = 13;
// 2 sec. frequency
unsigned long interval=130;    // the time we need to wait
unsigned long previousMillis=0; // millis() returns an unsigned long.

void setup()
{
 pinMode(d1, OUTPUT);
 pinMode(d2, OUTPUT);
 pinMode(d3, OUTPUT);
 pinMode(d4, OUTPUT);
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
 pinMode(dp, OUTPUT);
 pinMode(lamp, OUTPUT);
}
/////////////////////////////////////////////////////////////
void loop()
{

static int d1 = 0;
static int d2 = 0;
static int d3 = 0;
static int d4 = 0;


for (int i=0; i < 10; i++){

Display(1,d1);
Display(2,d2);
Display(3,d3);
//Display(4,d4);

    //Display(4, i);
    delay(5);
    if (i == 9){
        Display(4, d4++);
          if (d4 == 9){
            d4=0;
            Display(3, d3++);
          }
             if (d3 == 9){
              d3=0;
              Display(2, d2++);
             }
               if (d2 == 9){
                d2=0;
                Display(1, d1++);
               }
               
    }
  }
}
///////////////////////////////////////////////////////////////
void WeiXuan(unsigned char n)//
{
 switch(n)
 {
case 1:
 digitalWrite(d1,LOW);
 digitalWrite(d2, HIGH);
 digitalWrite(d3, HIGH);
 digitalWrite(d4, HIGH);
break;
case 2:
 digitalWrite(d1, HIGH);
 digitalWrite(d2, LOW);
 digitalWrite(d3, HIGH);
 digitalWrite(d4, HIGH);
 break;
 case 3:
 digitalWrite(d1,HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(d3, LOW);
 digitalWrite(d4, HIGH);
 break;
 case 4:
 digitalWrite(d1, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(d3, HIGH);
 digitalWrite(d4, LOW);
 break;
 default :
 digitalWrite(d1, HIGH);
 digitalWrite(d2, HIGH);
 digitalWrite(d3, HIGH);
 digitalWrite(d4, HIGH);
 break;
 }
}
void Num_0()
{
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);

 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, LOW);
 digitalWrite(dp,LOW); }
void Num_1() {
 digitalWrite(a, LOW);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
 digitalWrite(dp,LOW); }
void Num_2() {
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, LOW);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);
 digitalWrite(dp,LOW); }
void Num_3() {
digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, HIGH);
 digitalWrite(dp,LOW); }
void Num_4() {
 digitalWrite(a, LOW);

 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 digitalWrite(dp,LOW); }
void Num_5() {
 digitalWrite(a, HIGH);
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 digitalWrite(dp,LOW); }
void Num_6() {
 digitalWrite(a, HIGH);
 digitalWrite(b, LOW);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 digitalWrite(dp,LOW); }
void Num_7() {
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
 digitalWrite(dp,LOW); }
void Num_8() {

 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, HIGH);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 digitalWrite(dp,LOW);
}
void Num_9()
{
 digitalWrite(a, HIGH);
 digitalWrite(b, HIGH);
 digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
 digitalWrite(e, LOW);
 digitalWrite(f, HIGH);
 digitalWrite(g, HIGH);
 digitalWrite(dp,LOW);
}
void Clear() // clear the screen
{
 digitalWrite(a, LOW);
 digitalWrite(b, LOW);
 digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 digitalWrite(e, LOW);
 digitalWrite(f, LOW);
 digitalWrite(g, LOW);
 digitalWrite(dp,LOW);
}
void pickNumber(unsigned char n)// select number
{
 switch(n)
 {
 case 0:Num_0();
 break;
 case 1:Num_1();
 break;
 case 2:Num_2();
 break;
 case 3:Num_3();
 break;

 case 4:Num_4();
 break;
 case 5:Num_5();
 break;
 case 6:Num_6();
 break;
 case 7:Num_7();
 break;
 case 8:Num_8();
 break;
 case 9:Num_9();
 break;
 default:Clear();
 break;
 }
}
void Display(unsigned char x, unsigned char Number)// take x as coordinate and display number
{
 WeiXuan(x);
 pickNumber(Number);
delay(1);
Clear() ; // clear the screen
}
//////////////////////////////////////////////////////////

/*

int servopin=13;// select digital pin 9 for servomotor signal line
int myangle;// initialize angle variable
int pulsewidth;// initialize width variable
int val;
void servopulse(int servopin,int myangle)// define a servo pulse function
{
pulsewidth=(myangle*11)+500;// convert angle to 500-2480 pulse width
digitalWrite(servopin,HIGH);// set the level of servo pin as ―high‖
delayMicroseconds(pulsewidth);// delay microsecond of pulse width
digitalWrite(servopin,LOW);// set the level of servo pin as ―low‖
delay(20-pulsewidth/1000);
}
void setup()
{
pinMode(servopin,OUTPUT);// set servo pin as ―output‖

Serial.begin(9600);// connect to serial port, set baud rate at ―9600‖
Serial.println("servo=o_seral_simple ready" ) ;
}
void loop()// convert number 0 to 9 to corresponding 0-180 degree angle, LED blinks

{
val=Serial.read();// read serial port value
if(val>'0'&&val<='9')
{
val=val-'0';// convert characteristic quantity to numerical variable
val=val*(180/9);// convert number to angle
Serial.print("moving servo to ");
Serial.print(val,DEC);
Serial.println();
for(int i=0;i<=50;i++) // giving the servo time to rotate to commanded position
{
servopulse(servopin,val);// use the pulse function
}
}
}
*/
//////////////////////////////////////////////////////////
