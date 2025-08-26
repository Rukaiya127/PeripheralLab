int a=6,b=5,c=4,d=3,e=2,f=1,g=0;
void setup() { 
    pinMode(a,OUTPUT);
    pinMode(b,OUTPUT); pinMode(c,OUTPUT);
    pinMode(d,OUTPUT);pinMode(e,OUTPUT); 
    pinMode(f,OUTPUT); pinMode(g,OUTPUT);
}
void loop() {
//0 out for cathode 
digitalWrite(a,1); digitalWrite(b,1); digitalWrite(c,1); digitalWrite(d,1); digitalWrite(e,1); digitalWrite(f,1); digitalWrite(g,0); delay(1000);
//1 out for cathode
digitalWrite(a,0); digitalWrite(b,1); digitalWrite(c,1); digitalWrite(d,0); digitalWrite(e,0); digitalWrite(f,0); digitalWrite(g,0); delay(1000);
//2 out for cathode
 digitalWrite(a,1); digitalWrite(b,1); digitalWrite(c,0); digitalWrite(d,1); digitalWrite(e,1); digitalWrite(f,0); digitalWrite(g,1);delay(1000);
//3 out for cathode
 digitalWrite(a,1); digitalWrite(b,1); digitalWrite(c,1); digitalWrite(d,1); digitalWrite(e,0); digitalWrite(f,0); digitalWrite(g,1); delay(1000);
//4 out for cathode
 digitalWrite(a,0); digitalWrite(b,1); digitalWrite(c,1); digitalWrite(d,0); digitalWrite(e,0); digitalWrite(f,1); digitalWrite(g,1); delay(1000);
//5 out for cathode
 digitalWrite(a,1); digitalWrite(b,0); digitalWrite(c,1); digitalWrite(d,1); digitalWrite(e,0); digitalWrite(f,1); digitalWrite(g,1); delay(1000);
//6 out for cathode 
digitalWrite(a,1); digitalWrite(b,0); digitalWrite(c,1);digitalWrite(d,1); digitalWrite(e,1); digitalWrite(f,1); digitalWrite(g,1); delay(1000);
//7 out for cathode
 digitalWrite(a,1); digitalWrite(b,1); digitalWrite(c,1); digitalWrite(d,0); digitalWrite(e,0); digitalWrite(f,1); digitalWrite(g,0); delay(1000);
//8 out for cathode 
digitalWrite(a,1); digitalWrite(b,1); digitalWrite(c,1); digitalWrite(d,1); digitalWrite(e,1); digitalWrite(f,1); digitalWrite(g,1); delay(1000);
//9 out for cathode
 digitalWrite(a,1); digitalWrite(b,1); digitalWrite(c,1); digitalWrite(d,1); digitalWrite(e,0); digitalWrite(f,1); digitalWrite(g,1); delay(1000);
}
