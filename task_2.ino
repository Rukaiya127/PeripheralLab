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
int ledpin = 4;

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(ledpin, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    char E = keypad.getKey();
    if (E)
    {
        switch (E)
        {
        case '1':
            Serial.println("Welcome");
            break;
        case '2':
            digitalWrite(ledpin, HIGH);
            break;
        case '3':
            digitalWrite(ledpin, LOW);
            break;
        case '4':
            for (int i = 0; i < 5; i++)
            {
                digitalWrite(ledpin, HIGH);
                delay(300);
                digitalWrite(ledpin, LOW);
                delay(300);
            }
            break;
        case '5':
            for (int i = 0; i < 100; i++)
            {
                Serial.println();
            }
            break;
        }
    }
}
