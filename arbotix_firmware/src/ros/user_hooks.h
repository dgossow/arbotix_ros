/*
 * This file can be used to define custom register addresses
 * Just use addresses 100 and above
 */

int trigger = 16;

void userSetup()
{
  // do any setup here
  pinMode(trigger, OUTPUT);  // trigger pin
}

unsigned char userWrite(int addr, unsigned char param)
{
  // use the register value
  if ( addr == 100 )
  {
    digitalWrite(trigger,LOW);
    delay(1+param);
    digitalWrite(trigger,HIGH);
  }
  return ERR_INSTRUCTION;
}


/* Read one byte from register located at addr */
int userRead(int addr)
{
  // return the register value
  return 0; 
}
