int left_display = 9;
int right_display = 10;
int segment_pins[] = {2,3,4,5,6,7,8};
int digits[10][7] = {
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1}
};
int count = 0;
unsigned long last_update = 0;
unsigned long last_refresh = 0;
int current_digit = 0;
void setup() {
  for(int i=0;i<7;i++)
  {
    pinMode(segment_pins[i],OUTPUT);
  }
  pinMode(left_display,OUTPUT);
  pinMode(right_display,OUTPUT);
}

void clear_display()
{
  digitalWrite(left_display,LOW);
  digitalWrite(right_display,LOW);
}

void display_digit(int num, int digit_pin)
{
  clear_display();
  delayMicroseconds(100);
  for(int i=0;i<7;i++)
  {
    digitalWrite(segment_pins[i],digits[num][i]);
  }
  digitalWrite(digit_pin,HIGH);
}

void loop() {
  unsigned long current_time = millis();
    delay(40);
    if(current_digit == 0)
    {
      display_digit(count/10, right_display);
      current_digit = 1;
    }
    else
    {
      display_digit(count%10, left_display);
      current_digit = 0;
    }

  if(current_time - last_update >= 1000)
  {
    count = (count+1)%100;
    last_update = current_time;
  }
}