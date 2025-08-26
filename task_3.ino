#include <Keypad.h>
const byte row = 4, col = 4;
char keys[row][col] =
    {{'7', '8', '9', '/'},
     {'4', '5', '6', '*'},
     {'1', '2', '3', '-'},
     {'A', '0', '=', '+'}};
byte rowpin[row] = {13, 12, 11, 10};
byte colpin[col] = {9, 8, 7, 6};
Keypad keypad = Keypad(makeKeymap(keys), rowpin, colpin, row, col);
int ledpin = 3, motor = 2, sensor = A0;
int threshold = 25;
bool alarm = false;

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(motor, OUTPUT);
    pinMode(ledpin, OUTPUT);
}
float readtemp()
{
    int read = analogRead(sensor);
    float val = read * 5.0 / 1023.0;
    return val * 100.0;
}

void loop()
{
    // put your main code here, to run repeatedly:
    float temp = readtemp();

    if (alarm == true && temp > threshold)
    {
        digitalWrite(ledpin, HIGH);

        Serial.println("Over temperature");
    }
    else
    {
        digitalWrite(ledpin, LOW);
    }

    char E = keypad.getKey();
    if (E)
    {
        switch (E)
        {
        case '1':
            Serial.println("Current Temperature: ");
            Serial.print(temp);
            Serial.println(" C");
            break;
        case '2':
            threshold = 27;
            Serial.print("thresold set: ");
            Serial.println(threshold);

            break;
        case '3':
            alarm = true;
            Serial.println("Alarm Enable");

            break;
        case '4':

            alarm = false;
            Serial.println("Alarm Disable");
            break;
        case '5':
            if (temp > threshold)
            {
                digitalWrite(motor, HIGH);
                Serial.println("Fan On");
            }
            else
            {
                digitalWrite(motor, LOW);
                Serial.println("Fan OFF");
            }

            break;
        }
    }

    delay(500);
}
