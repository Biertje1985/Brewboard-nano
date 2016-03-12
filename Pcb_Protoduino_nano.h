// sensor and lcd
OneWire ds(7);
LiquidCrystal lcd(A5, A4, 2, 3, 4, 5);

// push buttons
const char Button_dn    = A3;
const char Button_up    = A2;
const char Button_enter = A1;
const char Button_start = A0;

// outputs
const byte Pump = 6;
const byte Buzz = 11;
const byte Heat = 9;
const byte spare1 = A6;
//const byte spare2 = D8;
//const byte spare3 = D10;
//const byte spare4 = D11;
//const byte spare5 = D12;

